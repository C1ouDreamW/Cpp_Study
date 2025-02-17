#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 == "fine" && s2 == "fine") {
    cout << 4 << endl;
  } else if (s1 == "fine" && s2 == "sick") {
    cout << 3 << endl;
  } else if (s1 == "sick" && s2 == "fine") {
    cout << 2 << endl;
  } else if (s1 == "sick" && s2 == "sick") {
    cout << 1 << endl;
  }
}

signed main() {
  solve();
  return 0;
}