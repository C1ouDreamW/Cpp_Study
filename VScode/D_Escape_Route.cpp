#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
// 右 左 下 上
/*
遍历每个E，标记出每个点到最近E的最短距离
每个单元格的箭头指向四周最小的那个
*/

const int MAX_N = 1010;
char a[MAX_N][MAX_N];
char ans[MAX_N][MAX_N];
int dis[MAX_N][MAX_N];
queue<PII> e;

void solve() {
  memset(dis, 0x3f, sizeof dis);
  int h, w;
  cin >> h >> w;
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      char x;
      cin >> x;
      a[i][j] = x;
      if (a[i][j] == 'E') {
        e.push({i, j});
      }
    }
  }

  queue<PII> q;
  while (!e.empty()) {
    q.push(e.front());
    dis[e.front().first][e.front().second] = 0;
    e.pop();
  }
  while (!q.empty()) {
    int x = q.front().first, y = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int xx = x + dx[i], yy = y + dy[i];
      if (a[xx][yy] == '.') {
        if (dis[x][y] + 1 < dis[xx][yy]) {
          dis[xx][yy] = dis[x][y] + 1;
          q.push({xx, yy});
        }
      }
    }
  }

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      if (a[i][j] == '.') {
        int status = 0, min_val = INT_MAX;
        for (int k = 0; k < 4; k++) {
          int xx = i + dx[k], yy = j + dy[k];
          if (a[xx][yy] == 'E') {
            status = k;
            break;
          }
          if (a[xx][yy] == '.') {
            if (dis[xx][yy] < min_val) {
              status = k;
              min_val = dis[xx][yy];
            }
          }
        }
        if (status == 0) { // 右 左 下 上
          ans[i][j] = '>';
        } else if (status == 1) {
          ans[i][j] = '<';
        } else if (status == 2) {
          ans[i][j] = 'v';
        } else if (status == 3) {
          ans[i][j] = '^';
        }
      } else {
        ans[i][j] = a[i][j];
      }
    }
  }
  // for (int i = 1; i <= h; i++) {
  //   for (int j = 1; j <= w; j++) {
  //     cout << dis[i][j];
  //   }
  //   cout << endl;
  // }
  // cout << endl;
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      cout << ans[i][j];
    }
    cout << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}