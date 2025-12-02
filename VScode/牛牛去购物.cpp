#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, a, b;
  cin >> n >> a >> b;
  int ans = INT_MAX;
  for (int i = 0; i * a <= n; i++) {
    int cost_b = n - i * a;
    for (int j = 0; j * b <= cost_b; j++) {
      ans = min(ans, cost_b - j * b);
    }
  }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}