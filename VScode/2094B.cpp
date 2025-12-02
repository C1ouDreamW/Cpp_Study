#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, m, l, r;
  cin >> n >> m >> l >> r;
  if (n == m) {
    cout << l << " " << r << endl;
    return;
  }
  while ((n - m)) {
    m++;
    if (l) {
      l++;
      continue;
    }
    if (r) {
      r--;
      continue;
    }
  }
  cout << l << " " << r << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}