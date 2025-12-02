#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int aa, bb, cc;
  for (int i = 0; i < k; i++) {
    aa = (b + c) >> 1;
    bb = (a + c) >> 1;
    cc = (a + b) >> 1;
    a = aa, b = bb, c = cc;
    if (a == b && b == c) {
      cout << a << " " << b << " " << c << endl;
      return;
    }
  }
  cout << a << " " << b << " " << c << endl;
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