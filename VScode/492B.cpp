#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
0 2 5
*/

void solve() {
  int n, l;
  cin >> n >> l;
  vector<double> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end());
  double c = 0;
  for (int i = 1; i < a.size(); i++) {
    c = max(c, a[i] - a[i - 1]);
  }
  double ans = c / 2.0;
  if (a[0]) {
    ans = max(ans, a[0]);
  }
  if (a.back() != l) {
    ans = max(ans, l - a.back());
  }
  printf("%.9lf", ans);
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}