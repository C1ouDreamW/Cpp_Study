#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, x;
  cin >> n >> x;
  if (x < n) {
    // 放在最后
    for (int i = 0; i < x; i++) {
      cout << i << " ";
    }
    for (int i = x + 1; i < n; i++) {
      cout << i << " ";
    }
    cout << x;
  } else { // x == n
    for (int i = 0; i < n; i++) {
      cout << i << " ";
    }
  }
  cout << endl;
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