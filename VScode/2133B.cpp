#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
最短路

a[i]<=a[i+1]

cost = max = a[i+1]

a[i] -= a[i] = 0
0   a[i+1]-a[i]

村民之间任意链接

dp[i] -- 前i个村民中最大可减少的花费（相比于单独成组）
a[i] <= a[i+1]
dp[i] = max(dp[i-1],dp[i-2]+a[i-2])
dp[0] = dp[1] = 0
*/

const int MAX_N = 200010;
int dp[MAX_N];

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a.begin(), a.end());

  for (int i = 2; i <= n; i++) {
    dp[i] = max(dp[i - 1], dp[i - 2] + a[i - 2]);
  }

  cout << sum - dp[n] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}