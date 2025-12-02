#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a > 2 * (b + 1) || b > 2 * (a + 1) || (c - a) > 2 * ((d - b) + 1) ||
      (d - b) > 2 * ((c - a) + 1)) {
    cout << "NO" << endl;
  } else
    cout << "YES" << endl;
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