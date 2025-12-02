#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
速度方向都是乘45度角的
所以任何球碰撞都只是会使两个球交换后续路径，不会影响最终的结果
所以不用考虑碰撞的情况

正方形球台，只有处于对角线上并速度方向沿对角线才行
0 0
0 s
s 0
s s
*/

void solve() {
  int n, s;
  cin >> n >> s;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int dx, dy, x, y;
    cin >> dx >> dy >> x >> y;
    if (x + y == s && dx + dy == 0) {
      cnt++;
      continue;
    }
    if (x == y && dx == dy) {
      cnt++;
      continue;
    }
  }
  cout << cnt << endl;
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