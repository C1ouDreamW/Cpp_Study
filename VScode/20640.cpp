#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt = 0;
  bool flag = true;
  for (int i = 0; i < n; i++) {
    if (flag) {
      if (s[i] == '1') {
        flag = false;
        cnt++;
      }
    } else {
      if (s[i] == '0') {
        flag = true;
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}