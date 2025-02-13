#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n;
  cin >> n;
  set<int> a, b;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.insert(x);
  }
  for (int i = 0; i < n; i++) {
    int y;
    cin >> y;
    b.insert(y);
  }
  if ((int)a.size() + (int)b.size() >= 4) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
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