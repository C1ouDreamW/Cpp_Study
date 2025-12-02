#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
const double e = 2.718281828459045;
void solve() {
  double a, b, c;
  cin >> a >> b >> c;
  double ans = b * powl(e, a);
  if (c == 1) {
    printf("%.1lf", ans);
  } else if (c == 2) {
    printf("%.2lf", ans);
  } else if (c == 3) {
    printf("%.3lf", ans);
  } else if (c == 4) {
    printf("%.4lf", ans);
  } else {
    printf("%.5lf", ans);
  }
  cout << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}