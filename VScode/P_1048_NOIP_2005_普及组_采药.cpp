#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

// 01背包问题
const int N = 11000;
int t[N], v[N];
int dp[101000];

// void solve() {
//   int T, m;
//   cin >> T >> m;
//   for (int i = 1; i <= m; i++) {
//     cin >> t[i] >> v[i];
//   }
//   for (int i = 1; i <= m; i++) {
//     for (int j = T; j >= t[i]; j--) {
//       dp[j] = max(dp[j], dp[j - t[i]] + v[i]);
//     }
//   }
//   cout << dp[T] << endl;
// }

////多重背包问题
int num[N];
void solve() {
  int T, m;
  cin >> m >> T;
  for (int i = 1; i <= m; i++) {
    cin >> t[i] >> v[i] >> num[i];
  }
  for (int i = 1; i <= m; i++) {
    for (int j = t[i]; j <= T; j++) {
      dp[j] = max(dp[j], dp[j - t[i]] + v[i]);
    }
  }
  cout << dp[T] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}