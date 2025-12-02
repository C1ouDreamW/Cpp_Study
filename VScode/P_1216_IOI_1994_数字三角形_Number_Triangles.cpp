#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 1010;
int dp[N][N]; // 记录第i层第j个的最大值
int a[N][N];

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cin >> a[i][j];
    }
  }
  dp[1][1] = a[1][1];
  int max_val = 0;
  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      if (j == 1) {
        dp[i][j] = dp[i - 1][j];
      } else if (j == i) {
        dp[i][j] = dp[i - 1][j - 1];
      } else {
        dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]);
      }
      dp[i][j] += a[i][j];
    }
  }
  for (int j = 1; j <= n; j++) {
    max_val = max(max_val, dp[n][j]);
  }
  cout << max_val << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}