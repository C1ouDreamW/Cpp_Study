#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 10010;
int T, m;
int f[10000010]; // f[i][j]  采前i种草药时间不超过j的情况下的最大值
int t[N], v[N];

void solve() {
  cin >> T >> m;
  for (int i = 1; i <= m; i++) {
    cin >> t[i] >> v[i];
  }

  for (int i = 1; i <= m; i++) {
    for (int j = t[i]; j <= T; j++) {
      f[j] = max(f[j], f[j - t[i]] + v[i]);
    }
  }

  cout << f[T] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}