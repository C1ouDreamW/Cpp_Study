#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, m;
  cin >> n >> m;
  map<int, int> mp_u, mp_v;
  vector<vector<int>> a(n + 1, vector<int>(m + 1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      int x;
      cin >> x;
      mp_u[i + j] += x;
      mp_v[i - j] += x;
      a[i][j] = x;
    }
  }

  int max_sum = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      max_sum = max(max_sum, mp_u[i + j] + mp_v[i - j] - a[i][j]);
    }
  }

  cout << max_sum << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}