#include <bits/stdc++.h>
using namespace std;

const int N = 410;
int a[N][N];
bool flag[N][N];

int n, m, x, y;

int dx[8] = {-2, -1, -2, -1, 1, 2, 1, 2};
int dy[8] = {-1, -2, 1, 2, -2, -1, 2, 1};

int ccc = 1;

int bfs() {
  queue<pair<int, int>> q;
  q.push({x, y});
  int cnt = 0;
  while (!q.empty()) {
    int xx = q.front().first;
    int yy = q.front().second;
    q.pop();
    flag[xx][yy] = true;
    for (int i = 0; i < 8; i++) {
      int xxx = xx + dx[i];
      int yyy = yy + dy[i];
      if (xxx <= 0 || xxx > n || yyy <= 0 || yyy > m || flag[xxx][yyy] ||
          a[xxx][yyy] != -1) {
        continue;
      }
      a[xxx][yyy] = a[xx][yy] + 1;
      q.push({xxx, yyy});
    }
  }
  return -1;
}

void solve() {
  cin >> n >> m >> x >> y;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      a[i][j] = -1;
    }
  }
  a[x][y] = 0;
  bfs();
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cout << left << setw(5) << a[i][j];
    }
    cout << endl;
  }
}

signed main() {
  solve();
  return 0;
}