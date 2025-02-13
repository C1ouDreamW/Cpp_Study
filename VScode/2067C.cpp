#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int n) {
  string s = to_string(n);
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '7') {
      return true;
    }
  }

  return false;
}

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < 1000; i++) {
    int x = n + i * 9;
    if (check(x)) {
      cout << i << endl;
      return;
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