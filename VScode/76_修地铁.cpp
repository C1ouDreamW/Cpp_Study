#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  int a, b, c, d;
  a = n / 5 * 2;
  b = (n + 5) / 10;
  c = n / 20;
  d = (n - c) * 2;
  c *= 3;
  cout << a << " " << b << " " << c << " " << d;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}