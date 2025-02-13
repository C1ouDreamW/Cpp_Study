#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> a(n);
  vector<int> b(n);
  vector<int> temp(n);
  vector<int> final;
  for (int i = 0; i < n; i++) {
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a[i].push_back(x);
    }
  }
  for (int i = 0; i < n; i++) {
    int max_val = -1, max_idx = -1;
    for (int j = 0; j < (int)a.size(); j++) {
      b[j] += a[j][i];
      if (b[j] > max_val) {
        max_val = b[j];
        max_idx = j;
      }
    }
    b[max_idx] = 0;
  }
  sort(b.begin(), b.end());
  a.erase(unique(a.begin(), a.end()), a.end());
  int i = 0;
  for (i = 0; i < (int)b.size(); i++) {
    if (b[i] != i) {
      cout << i << endl;
      return;
    }
  }
  cout << i << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}