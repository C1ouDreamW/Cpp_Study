#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  map<int, int> mp;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int min_cnt = 200000;
  int cnt = 200000;
  int l = 0, r = 0;
  while (r < n) {
    mp[a[r]]++;
    while (mp[a[r]] == 2) {
      cnt = r - l + 1;
      min_cnt = min(min_cnt, cnt);
      mp[a[l]]--;
      l++;
    }
    r++;
  }
  if (min_cnt == 200000) {
    cout << -1 << endl;
    return;
  }
  cout << min_cnt << endl;
}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}