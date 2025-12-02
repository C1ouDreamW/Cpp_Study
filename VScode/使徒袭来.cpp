#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  double n;
  cin >> n;
  double x = powl(n, 1.0 / 3.0);
  printf("%.3lf", x * 3);
}

signed main() {
  solve();
  return 0;
}