#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

struct node {
  int x1, y1;
  int x2, y2;
};
int n, m;
char a[310][310];
int path[310][310];
bool flag[310][310];
int sx, sy, ex, ey;

void solve() {
  cin >> n >> m;
  vector<node> ch(26, {-1, -1, -1, -1});
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      if (a[i][j] == '@') {
        sx = i, sy = j;
      } else if (a[i][j] == '=') {
        ex = i, ey = j;
      } else if (a[i][j] >= 'A' && a[i][j] <= 'Z') {
        if (ch[a[i][j] - 'A'].x1 == -1) {
          ch[a[i][j] - 'A'].x1 = i, ch[a[i][j] - 'A'].y1 = j;
        } else {
          ch[a[i][j] - 'A'].x2 = i, ch[a[i][j] - 'A'].y2 = j;
        }
      }
    }
  }

  // bfs
  queue<PII> q;
  q.push({sx, sy});
  path[sx][sy] = 0;
  flag[sx][sy] = true;

  while (!q.empty()) {
    int x = q.front().first, y = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int xx = x + dx[i], yy = y + dy[i];
      if (xx >= 0 && yy >= 0 && xx < n && yy < m && (!flag[xx][yy])) {
        if (a[xx][yy] >= 'A' && a[xx][yy] <= 'Z' &&
            (ch[a[xx][yy] - 'A'].x1 != -1 && ch[a[xx][yy] - 'A'].x2 != -1)) {
          int xxx, yyy;
          if (xx == ch[a[xx][yy] - 'A'].x1) {
            xxx = ch[a[xx][yy] - 'A'].x2;
            yyy = ch[a[xx][yy] - 'A'].y2;
          } else {
            xxx = ch[a[xx][yy] - 'A'].x1;
            yyy = ch[a[xx][yy] - 'A'].y1;
          }
          // flag[xx][yy] = flag[xxx][yyy] = true;
          path[xx][yy] = path[xxx][yyy] = path[x][y] + 1;
          q.push({xxx, yyy});
        } else if (a[xx][yy] == '#') {
          continue;
        } else if (a[xx][yy] == '=') {
          cout << path[x][y] + 1 << endl;
          return;
        } else {
          flag[xx][yy] = true;
          path[xx][yy] = path[x][y] + 1;
          q.push({xx, yy});
        }
      }
    }
  }
  // cout << path[ex][ey] << endl;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     cout << path[i][j];
  //   }
  //   cout << endl;
  // }
  // cout << endl;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     cout << flag[i][j];
  //   }
  //   cout << endl;
  // }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}