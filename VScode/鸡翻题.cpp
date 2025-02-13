#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int x, y;
  cin >> x >> y;
  // if (y == 1) {
  //   if (x % 2 == 0) {
  //     cout << "YES" << endl;
  //     return;
  //   } else {
  //     cout << "NO" << endl;
  //     return;
  //   }
  // }

  //
  if (x % 2 != 0) {
    if ((y - 1) % 2 == 0) {
      if (((y - 1) / 2) % 2 != 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      cout << "NO" << endl;
    }
  } else {
    if ((y - 1) % 2 == 0) {
      if (((y - 1) / 2) % 2 == 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      cout << "NO" << endl;
    }
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