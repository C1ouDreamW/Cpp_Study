#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isGood(int x) {
  string s = to_string(x);
  reverse(s.begin(), s.end());
  for (int i = 0; i < (int)s.size(); i++) {
    if ((i + 1) % 2 == 0) {
      if (!((s[i] - '0') % 2 == 0)) {
        return false;
      }
    } else {
      if ((s[i] - '0') % 2 == 0) {
        return false;
      }
    }
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (isGood(i)) {
      ans++;
    }
  }
  cout << ans << endl;
}

signed main() {
  solve();
  return 0;
}