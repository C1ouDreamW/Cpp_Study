#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
a^1 --> 若a为奇数则a-1,若为偶数则a+1
*/

void solve() {
  int a, b, x, y;
  cin >> a >> b >> x >> y;
  if (a > b + 1) {
    cout << -1 << endl;
  } else if (a == b + 1) {
    if (a % 2 == 0) {
      cout << -1 << endl;
    } else {
      cout << y << endl;
    }
  } else {
    if (x <= y) {
      cout << (b - a) * x << endl;
    } else {
      int ans = 0;
      for (int i = a; i < b; i++) {
        if (i % 2 == 0) {
          ans += y;
        } else {
          ans += x;
        }
      }
      cout << ans << endl;
    }
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