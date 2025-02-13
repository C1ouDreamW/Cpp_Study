#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  while (m--) {
    int l, r, c;
    cin >> l >> r >> c;
    int bef_sort_c = c - l;
    int cnt = 0;
    for (int i = l; i <= r; i++) {
      if (a[i] < a[c]) {
        cnt++;
      }
    }
    cout << l + cnt << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}