#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
const int N = 100010;
int head[N], e[N * 2], ne[N * 2];
int idx = 0; // idx表示一个节点

void add(int a, int x) { // 为a链表的头部加入节点x
  e[idx] = x;
  ne[idx] = head[a];
  head[a] = idx;
  idx++;
}

int n, d;
bool flag[N];

int min_cnt = 1e8, min_idx = 1e8;

int dfs(int root) {
  int cnt = 1;
  int max_cnt = 0;
  // if (u == d) {
  //   return 1;
  // }

  for (int i = head[root]; i != -1; i = ne[i]) {
    int v = e[i];
    flag[v] = true;
    if (!flag[v]) {
      int ccc = dfs(v);
      max_cnt += ccc;
      cnt += ccc;
    }
  }

  if (cnt < min_cnt) {
    cnt = max_cnt;
    min_idx = root;
  }

  return cnt;
}

void solve() {
  memset(head, -1, sizeof head);
  cin >> n >> d;
  for (int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    add(a, b);
    add(b, a);
  }
  flag[1] = true;
  int cnt = dfs(1);
  cout << min_idx << " " << min_cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}