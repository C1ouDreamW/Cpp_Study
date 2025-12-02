#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, g;
  cin >> n >> g;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, r = 1;
  int temp = -1;
  int ans = 0;
  int cnt = 0;
  if (a[l] % g != 0) {
    temp = l;
    cnt++;
  }
  while (l < n && r < n) {
    if (a[r] % g != 0) {
      cnt++;
      if (cnt >= 2) {
        int n = r - l;
        ans += (n * (n - 1)) >> 1;
        ans += ((r - temp) * (r - temp - 1) >> 1);
        l = r, r++;
        cnt = 1;
      } else {
        r++;
      }
    } else {
      r++;
    }
  }
  if (cnt <= 1) {
    int x = r - l;
    ans += (x * (x - 1)) >> 1;
    cout << ans << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}