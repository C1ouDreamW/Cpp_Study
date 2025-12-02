#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int MAX_N = 5010, MAX_M = 500010;
const int MOD = 80112002;
int n, m;
int dp[MAX_N];
int ans[MAX_N];
int t;
int head[MAX_N], e[MAX_M], ne[MAX_M];
int en[MAX_N], ex[MAX_N]; // 记录每个点的入度和出度
int idx;

void add(int a, int b) {
  ne[idx] = head[b];
  head[b] = idx;
  e[idx++] = a;
}

int dfs(int u) {
  int res = 0;
  if (!ex[u]) {
    return 1;
  }
  for (int i = head[u]; i != -1; i = ne[i]) {
    if (!dp[e[i]]) {
      res += dfs(e[i]);
    } else {
      res += dp[e[i]];
      res %= MOD;
    }
  }
  dp[u] = res %= MOD;
  return res %= MOD;
}

void solve() {
  memset(head, -1, sizeof(head));
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    en[a]++, ex[b]++;
    add(a, b);
  }
  for (int i = 1; i <= n; i++) { // 线性遍历每入度为0的点
    if (!en[i]) {
      ans[++t] = dfs(i);
    }
  }
  int a = 0;
  for (int i = 1; i <= t; i++) {
    a += ans[i];
  }
  cout << a % MOD << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}