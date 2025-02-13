#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int x, y, z, a, b, c;
  cin >> x >> y >> z >> a >> b >> c;
  cout << max(a * x, max(b * y, c * z)) << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}