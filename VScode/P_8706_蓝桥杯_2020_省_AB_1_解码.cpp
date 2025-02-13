#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  string s;
  cin >> s;
  string ans;
  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] >= 'A' && s[i] <= 'z') {
      if (i + 1 < (int)s.size()) {
        if (s[i + 1] <= '9') {
          for (int j = 0; j < s[i + 1] - '0'; j++) {
            ans += s[i];
          }
        } else {
          ans += s[i];
        }
      } else {
        ans += s[i];
      }
    }
  }
  cout << ans << endl;
}

signed main() {
  solve();
  return 0;
}