#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

// 2 6
// t = 7

void solve() {
  int h, w;
  cin >> h >> w;
  int ans = 0;
  int has = w / 7 * 2;
  if (w % 7 >= 6) {
    has += 2;
  } else if (w % 7 >= 2) {
    has++;
  }
  for (int i = 0; i <= h; i++) {
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}