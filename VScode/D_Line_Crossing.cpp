#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
一共有C(2,m)对线
A(2,m)
C(2,m) - 平行线对
*/

void solve() {
  int n, m;
  cin >> n >> m;
  vector<PII> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i].first >> a[i].second;
    cout << a[i].first + a[i].second << endl;
  }
  int cnt = 1;
  for (int i = 1; i <= m; i++) {
    cnt *= i;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}