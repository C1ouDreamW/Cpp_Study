#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  bool ishas = false;
  int x = -2;
  int min_val = INT_MAX;
  int max_val = INT_MIN;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    min_val = min(min_val, a[i]);
    max_val = max(max_val, a[i]);
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    if (b[i] != -1) {
      if (!ishas) {
        ishas = true;
        x = a[i] + b[i];
      } else {
        if (a[i] + b[i] != x) {
          cout << 0 << endl;
          return;
        }
      }
    }
  }

  if (ishas) { // 锁定x
    cout << 1 << endl;
    return;
  }

  int mx = min_val + k;
  if (mx < max_val) {
    cout << 0 << endl;
    return;
  } else {
    cout << mx - max_val + 1 << endl;
  }
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