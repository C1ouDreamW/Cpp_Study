#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
max(suf[n-k],suf[n-k]-a[n-k]+pre[n-k])
pre[i] -- 0-i段内最大值
suf[n-k] -- 后缀和
n+n+n
O(3n)
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), pre(n), suf(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = n - 1; i >= 0; i--) {
    suf[i] = suf[i + 1] + a[i];
  }
  int m = 0;
  for (int i = 0; i < n; i++) {
    m = max(a[i], m);
    pre[i] = m;
  }
  for (int k = 1; k <= n; k++) {
    cout << max(suf[n - k], suf[n - k] - a[n - k] + pre[n - k]) << " ";
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