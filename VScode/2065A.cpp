#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  string s;
  cin >> s;
  s.pop_back();
  s.pop_back();
  s += 'i';
  cout << s << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}