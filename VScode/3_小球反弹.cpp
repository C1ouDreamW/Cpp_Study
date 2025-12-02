#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int h = 233333, w = 343720;

void solve() {
  // int a, b = 0;
  // for (a = 1; a < 1000000; a++) {
  //   if ((15 * a * h) % (17 * w) == 0) {
  //     b = (15 * a * h) / (17 * w);
  //     break;
  //   }
  // }
  // cout << a << " " << b << endl;

  double a = 1768, b = 1059;
  double ans = sqrt(a * a * h * h + b * b * w * w);
  printf("%.3lf", ans * 2);
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}