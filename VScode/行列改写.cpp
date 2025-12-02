#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
行列会互相覆盖
对于一对行和列来说，大的覆盖小的

二分查找有多少个比它大的，那么这一行\列就少几个格子
*/

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> r(n), c(m);
  for (int i = 0; i < n; i++)
    cin >> r[i];
  for (int i = 0; i < m; i++)
    cin >> c[i];
  sort(r.begin(), r.end());
  sort(c.begin(), c.end());
  int sum = 0;
  for (int i = 0; i < n; i++) { // 每一行有m个格子
    int cnt = m;
    auto it = lower_bound(c.begin(), c.end(), r[i]);
    cnt -= distance(it, c.end());
    sum += cnt * r[i];
  }

  for (int i = 0; i < m; i++) {
    int cnt = n;
    auto it = upper_bound(r.begin(), r.end(), c[i]);
    cnt -= distance(it, r.end());
    sum += cnt * c[i];
  }
  cout << sum << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}