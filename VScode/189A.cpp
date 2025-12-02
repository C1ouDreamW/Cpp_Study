#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
dp[i][j] : 已经切掉的长度为i，最后一次剪出j，dp[i][j] = 已经剪的段数

*/

int dp[1000000][3];

void solve() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  memset(dp, -1, sizeof dp);
  if (a > b)
    swap(a, b);
  if (a > c)
    swap(a, c);
  if (b > c)
    swap(b, c);
  for (int i = 0; i <= 2; i++) {
    dp[0][i] = 0;
  }
  // 已切长度为i时，最多能得到几段
  for (int i = 0; i <= n; i++) {
    if (i >= a) {
      dp[i][0] = dp[i - a][0] + 1;
    }
    dp[i][1] = dp[i][0];
    if (i >= b) {
      dp[i][1] = max(dp[i][1], dp[i - b][1] + 1);
    }
    dp[i][2] = dp[i][1];
    if (i >= c) {
      dp[i][2] = max(dp[i][2], dp[i - c][2] + 1);
    }
  }
  cout << dp[n][2] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}