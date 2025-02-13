#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(b.begin(), b.end());
  if (n == 1) {
    cout << "YES" << endl;
    return;
  }

  int temp = min(a[0], b1 - a[0]);
  for (int i = 1; i < n; i++) {
    int way1 = a[i];
    int way2 = b1 - a[i];
    if (way1 >= temp && way2 >= temp) {
      temp = min(way1, way2);
    } else if (way1 >= temp) {
      temp = way1;
    } else if (way2 >= temp) {
      temp = way2;
    } else {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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