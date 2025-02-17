#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

struct node {
  int x, y, t;
};

int m;
int a[310][310];
queue<PII> q;
queue<int> times;

void solve() {
  cin >> m;
  for (int i = 0; i < m; i++) {
    int x, y, t;
    cin >> x >> y >> t;
    if (a[x][y]) {
      a[x][y] = min(a[x][y], t + 1);
    } else {
      a[x][y] = t + 1;
    }

    for (int i = 0; i < 4; i++) {
      int xx = x + dx[i], yy = y + dy[i];
      if (xx >= 0 && yy >= 0) {
        if (a[xx][yy]) {
          a[xx][yy] = min(a[xx][yy], t + 1);
        } else {
          a[xx][yy] = t + 1;
        }
      }
    }
  }

  int time = 0;
  int xx, yy;
  times.push(0);
  q.push({0, 0});
  while (!q.empty()) {
    time = times.front();
    times.pop();
    xx = q.front().first;
    yy = q.front().second;
    q.pop();
    a[xx][yy] = -1;
    for (int i = 0; i < 4; i++) {
      int x = xx + dx[i], y = yy + dy[i];
      if (x >= 0 && y >= 0) {
        if (a[x][y] == 0) {
          cout << time + 1 << endl;
          return;
        } else if (a[x][y] == -1) {
          continue;
        } else if (a[x][y] - 1 < time + 2) {
          continue;
        }
        q.push({x, y});
        times.push(time + 1);
      }
    }
  }

  cout << -1 << endl;
}

signed main() {
  solve();
  // for (int i = 0; i < m; i++) {
  //   for (int j = 0; j < m; j++) {
  //     cout << a[i][j] << ' ';
  //   }
  //   cout << endl;
  // }
  return 0;
}