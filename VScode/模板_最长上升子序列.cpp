#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
int dx[8] = {0, 0, -1, 1, -1, -1, 1, 1};
int dy[8] = {
    1, -1, 0, 0, 1, -1, 1, -1,
};
int n, m;
queue<PII> q;

signed main() {
  cin >> n >> m;
  vector<vector<char>> a(n + 1, vector<char>(m + 1));
  vector<vector<bool>> f(n + 1, vector<bool>(m + 1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
      if (a[i][j] == 'W') {
        q.push({i, j});
      }
    }
  }
  int cnt = 0;
  while (!q.empty()) {
    int x = q.front().first, y = q.front().second;
    q.pop();
    if (f[x][y])
      continue;
    cnt++;
    queue<PII> qu;
    qu.push({x, y});
    f[x][y] = true;
    while (!qu.empty()) {
      x = qu.front().first, y = qu.front().second;
      qu.pop();
      for (int i = 0; i < 8; i++) {
        int xx = x + dx[i], yy = y + dy[i];
        if (xx < 1 || xx > n || yy < 1 || yy > m) {
          continue;
        }
        if (f[xx][yy] || a[xx][yy] == '.')
          continue;
        f[xx][yy] = true;
        qu.push({xx, yy});
      }
    }
  }
  cout << cnt << endl;
  return 0;
}