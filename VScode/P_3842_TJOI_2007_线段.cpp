#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int MAX_N = 20010;
int n;
int L[MAX_N], R[MAX_N];
int dp[MAX_N][2]; // 第i层 先到左端点或右端点的最短路径

/*
dp[i][0] = min(dp[i-1][0]+abs(L[i]-L[i-1]),dp[i-1][1]+abs[L[i]-R[i]])+1;

*/

void solve() {
  cin >> n;
  memset(dp, INT_MAX, sizeof(dp));
  for (int i = 1; i <= n; i++) {
    cin >> L[i] >> R[i];
  }
  dp[1][0] = R[1] - 1;
  dp[1][1] = R[1] - 1 + R[1] - L[1];
  for (int i = 2; i <= n; i++) {
    // 先到i的左端点
    // 从i-1的右端点走过来  --  右到左
    if (R[i] <= R[i - 1]) {
      dp[i][0] = dp[i - 1][0] + 1 + abs(L[i] - R[i - 1]);
    } else {
      dp[i][0] = dp[i - 1][0] + 1 + abs(L[i] - R[i - 1]) + abs(R[i] - L[i]);
    }
    // 从i-1的左端点走过来  --  左到左
    if (L[i] >= L[i - 1]) {
      dp[i][0] = min(dp[i][0], dp[i - 1][1] + 1 + abs(R[i] - L[i - 1]));
    } else {
      dp[i][0] = min(dp[i][0], dp[i - 1][1] + 1 + abs(L[i] - L[i - 1]) +
                                   abs(R[i] - L[i]));
    }
    // 先到i的右端点
    // 从i-1的右端点走过来  --  右到右
    if (R[i] <= R[i - 1]) {
      dp[i][1] = dp[i - 1][0] + 1 + abs(L[i] - R[i - 1]);
    } else {
      dp[i][1] = dp[i - 1][0] + 1 + abs(R[i] - R[i - 1]) + abs(R[i] - L[i]);
    }
    // 从i-1的左端点走过来  --  左到右
    if (L[i] >= L[i - 1]) {
      dp[i][1] = min(dp[i][1], dp[i - 1][1] + 1 + abs(R[i] - L[i - 1]));
    } else {
      dp[i][1] = min(dp[i][1], dp[i - 1][1] + 1 + abs(L[i] - L[i - 1]) +
                                   abs(R[i] - L[i]));
    }
  }
  int ans = 0;
  ans = min(dp[n][0] + abs(L[n] - n), dp[n][1] + abs(R[n] - n));
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}