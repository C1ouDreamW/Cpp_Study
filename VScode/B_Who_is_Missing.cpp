#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, m;
  cin >> n >> m;
  map<int, int> mp;
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    mp[x]++;
  }

  cout << n - m << endl;
  for (int i = 1; i <= n; i++) {
    if (!mp[i]) {
      cout << i << " ";
    }
  }
  cout << endl;
}

signed main() {
  solve();
  return 0;
}