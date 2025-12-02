#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 100010;
bool vt[N];
int a[N], b[N];
int n, m;
int min_val = INT_MAX;

void dfs(int u) {
  if (u == m) {
    int L = 0;
    for (int i = 0; i < m - 1; i++) {
      L += abs(a[b[i + 1]] * a[b[i + 1]] - a[b[i]] * a[b[i]]);
      if (L >= min_val)
        return;
    }
    min_val = min(min_val, L);
    return;
  }

  for (int i = 0; i < n; i++) {
    if (vt[i])
      continue;
    vt[i] = true;
    b[u] = i;
    dfs(u + 1);
    vt[i] = false;
  }
}

void solve() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  dfs(0);
  cout << min_val << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}