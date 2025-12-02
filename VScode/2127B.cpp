#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
至少有两个空单元格

最坏的情况是一直撞一边，最终可以出去

在只朝一边撞时若墙后有空格，则可以一直堵

5 3
##..#

6 4
#...#.
*/

int n, x;

void solve() {
  cin >> n >> x;
  string s;
  cin >> s;
  bool fl = true, fr = true;
  int l, r;
  x--;
  if (x >= 1) {
    for (int i = x - 1; i >= 0; i--) {
      if (s[i] == '#') {
        fl = false;
        l = i;
        break;
      }
    }
  }
  if (x < n - 1) {
    for (int i = x + 1; i < n; i++) {
      if (s[i] == '#') {
        fr = false;
        r = i;
        break;
      }
    }
  }

  if ((fl && fr) || (x == 0 || x == n - 1)) {
    cout << 1 << endl;
  } else {
    cout << max(min(x + 1, n - r + 1), min(l + 2, n - x)) << endl;
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