#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
/*
操作：删除a的最后一个元素
0-n次操作

*/

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  map<int, int> mp;
  int cnt = 0;
  for (int i = 0; i <= n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }
  for (int j = 1; j <= m; j++) {
    if (mp[j] <= 0) {
      cout << cnt << endl;
      return;
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    mp[a[i]]--;
    cnt++;
    for (int j = 1; j <= m; j++) {
      if (mp[j] <= 0) {
        cout << cnt << endl;
        return;
      }
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}