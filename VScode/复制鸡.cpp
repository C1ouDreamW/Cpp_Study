#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n;
  cin >> n;
  vector<int> b(n);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  b.erase(unique(b.begin(), b.end()), b.end());
  cout << (int)b.size() << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}