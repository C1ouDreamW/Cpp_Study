#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
如果边的两端颜色相同 则 cost = 0,不同则 cost = c[i]
每次查询后输出所有边的cost总和

邻接表存边
*/

void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  vector<vector<PII>> map(n);

  for (int i = 1; i < n; i++) {
    int u, v, c;
    cin >> u >> v >> c;
    u--, v--;
    map[u].emplace_back(v, c);
    map[v].emplace_back(u, c);
  }
  while (q--) {
    int v, x;
    cin >> v >> x;
  }
  int cost = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < map[i].size(); j++) {
      if (a[i] != a[map[i][j].first]) {
        cost += map[i][j].second;
      }
    }
  }
  cout << "cost = " << cost / 2 << endl;
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