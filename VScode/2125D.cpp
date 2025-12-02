#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
单元格 1-m
（l,r）内概率为p/q

计算每一个单元格刚好只被一个段覆盖的概率(x/y)
*/

struct node {
  int l, r, p, q;
};

void solve() {
  int n, m;
  cin >> n >> m;
  vector<node> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].l >> a[i].r >> a[i].p >> a[i].q;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}