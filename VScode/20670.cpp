#include <iostream>
using namespace std;
#define int long long

void solve() {
  int x, y;
  cin >> x >> y;
  int s = x - y + 1;
  if (s < 0) {
    cout << "No" << endl;
    return;
  }
  if (s % 9 != 0) {
    cout << "No" << endl;
    return;
  }
  int k = s / 9;
  if (x >= 9 * k) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
