#include <bits/stdc++.h>
using namespace std;
#define int long long

int dp[1010];

void solve() {
  int m, n;
  cin >> m >> n;
  vector<int> times(n + 1), vals(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> times[i] >> vals[i];
  }

  for (int i = 1; i <= n; i++) {
    for (int j = m; j >= times[i]; j--) {
      dp[j] = max(dp[j], dp[j - times[i]] + vals[i]);
    }
  }

  cout << dp[m] << endl;
}

signed main() {
  solve();
  return 0;
}