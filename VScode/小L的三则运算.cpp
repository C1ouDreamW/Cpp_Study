#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int x;
  cin >> x;
  char ch;
  cin >> ch;
  if (ch == '*') {
    cout << x << " " << 1 << endl;
  } else if (ch == '+') {
    cout << x - 1 << " " << 1 << endl;
  } else if (ch == '-') {
    cout << x + 1 << " " << 1 << endl;
  }
}

signed main() {
  solve();
  return 0;
}