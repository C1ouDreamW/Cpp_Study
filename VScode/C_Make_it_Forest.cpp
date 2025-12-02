#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int n, m;
const int N = 1000000;
int head[N], e[N], ne[N];
int idx = 0;
int cnt = 0;
bool visited[N];

void add(int u, int v) {
  e[idx] = v;
  ne[idx] = head[u];
  head[u] = idx++;
}

bool flag = false;

void del(int u, int v) {
  if (e[head[u]] == v) {
    head[u] = -1;
    return;
  }
  int temp = head[u];
  for (int i = head[u]; i != -1; i = ne[i]) {
    if (e[i] == v) {
      ne[temp] = ne[i];
    } else {
      temp = i;
    }
  }
}

void dfs(int u, int father) {
  if (visited[u]) {
    if (head[u] == -1) {
      return;
    }
    // cout << "del " << u << " " << e[head[u]] << endl;
    cnt++;
    del(head[u], u);
    del(u, e[head[u]]);
    // int uuu = head[u];
    // int temp = head[uuu];
    // for (int i = head[uuu]; i != -1; i = ne[i]) {
    //   if (e[i] == u) {
    //     ne[temp] = ne[i];
    //   } else {
    //     temp = i;
    //   }
    // }
    // head[u] = ne[head[u]];

    flag = true;
    return;
  } else {
    visited[u] = true;
  }

  for (int i = head[u]; i != -1; i = ne[i]) {
    if (flag) {
      return;
    }
    int j = e[i];
    if (j == father)
      continue;
    dfs(j, u);
  }
}

void solve() {
  memset(ne, -1, sizeof(ne));
  memset(head, -1, sizeof(head));
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    add(x, y);
    add(y, x);
  }

  for (int i = 1; i <= n; i++) {
    flag = false;
    memset(visited, 0, sizeof(visited));
    dfs(i, i);
  }

  cout << cnt << endl;

  // del(head[1], 1);
  // del(1, 2);
  // for (int u = 1; u <= n; u++) {
  //   int temp = u;
  //   cout << u << " : " << endl;
  //   for (int i = head[u]; i != -1; i = ne[i]) {
  //     cout << e[i] << " ";
  //   }
  //   cout << endl;
  // }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}