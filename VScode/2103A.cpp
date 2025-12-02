#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  map<int, int> mp;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    mp[a[i]]++;
    if (mp[a[i]] > 1) {
      cnt++;
    }
  }
  cout << n - cnt << endl;
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