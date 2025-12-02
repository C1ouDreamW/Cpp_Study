#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  if ((x1 + x2 == 2 * x3 && x3 == 0) || (y1 + y2 == 2 * y3 && y3 == 0) ||
      (x1 + x3 == 2 * x2 && x2 == 0) || (y1 + y3 == 2 * y2 && y2 == 0) ||
      (x2 + x3 == 2 * x1 && x1 == 0) || (y2 + y3 == 2 * y1 && y1 == 0)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
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