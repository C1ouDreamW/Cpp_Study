#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
const int N = 25;
int f[N][N]; // f[i][j] 表示到达(i,j)点的路径条数

/*
    f[i][j] = f[i-1][j] + f[i][j-1]
    f[0][j] = 1;
    f[i][0]=  1;
    控制点为0；
*/

void solve() {
  int ex, ey, hx, hy;
  cin >> ex >> ey >> hx >> hy;
  ex++, ey++, hx++, hy++;
  ex++, ey++, hx++, hy++;
  f[2][1] = 1;
  for (int i = 2; i <= ex; i++) {
    for (int j = 2; j <= ey; j++) {
      if ((i == hx && j == hy) || (i == hx - 1 && j == hy - 2) ||
          (i == hx - 2 && j == hy - 1) || (i == hx - 2 && j == hy + 1) ||
          (i == hx - 1 && j == hy + 2) || (i == hx + 1 && j == hy - 2) ||
          (i == hx + 2 && j == hy - 1) || (i == hx + 1 && j == hy + 2) ||
          (i == hx + 2 && j == hy + 1)) {
        continue;
      } else {
        f[i][j] = f[i - 1][j] + f[i][j - 1];
      }
    }
  }
  cout << f[ex][ey] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}