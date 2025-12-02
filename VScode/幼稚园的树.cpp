#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, a, k, b, m;
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  cin >> a >> k >> b >> m;
  while (m--) {
    for (int i = 0; i < n; i++) {
      if (h[i] > k) {
        h[i] = b;
      }
      h[i] += a;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << h[i] - a << " ";
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