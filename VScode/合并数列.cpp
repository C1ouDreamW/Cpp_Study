#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int l = 0, r = 0;
  int sum_l = a[0], sum_r = b[0];
  int cnt = 0;
  while (l < n && r < m) {
    if (sum_l == sum_r) {
      l++, r++;
      if (l >= n || r >= n) {
        break;
      }
      sum_l = a[l], sum_r = b[r];
    } else if (sum_l < sum_r) {
      sum_l += a[++l];
      cnt++;
    } else if (sum_l > sum_r) {
      sum_r += b[++r];
      cnt++;
    }
  }
  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}