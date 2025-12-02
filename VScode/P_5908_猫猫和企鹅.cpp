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

int dfs(int u, int root) {
  int cnt = 1;
  if (u == d) {
    return 1;
  }

  for (int i = head[root]; i != -1; i = ne[i]) {
    int v = e[i];
    if (!flag[v]) {
      flag[v] = true;
      cnt += dfs(u + 1, v);
    }
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
  int cnt = dfs(0, 1);
  cout << cnt - 1 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}