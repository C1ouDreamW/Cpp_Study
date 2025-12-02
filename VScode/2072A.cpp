#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, k, p;
  cin >> n >> k >> p;
  k = abs(k);
  if (k > n * p) {
    cout << -1 << endl;
    return;
  } else if (k == 0) {
    cout << 0 << endl;
    return;
  }
  int cnt = 1;
  while (k > p) {
    k -= p;
    cnt++;
  }

  cout << cnt << endl;
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