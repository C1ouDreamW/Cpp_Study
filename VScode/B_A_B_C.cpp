#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 0; i < s.size(); i++) {
    for (int j = i + 1; j < s.size(); j++) {
      for (int k = j + 1; k < s.size(); k++) {
        if (j - i == k - j) {
          if (s[i] == 'A' && s[j] == 'B' && s[k] == 'C') {
            cnt++;
          }
        }
      }
    }
  }

  cout << cnt << endl;
}

signed main() {
  solve();
  return 0;
}