#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int n, m, t;
int sx, sy, ex, ey;
vector<PII> path;
vector<vector<PII>> paths;
int a[6][6];
int v[6][6];

int cnt = 0;

void dfs(int x, int y) {
  if (x == ex && y == ey) {
    cnt++;
    paths.push_back(path);
    return;
  }

  for (int i = 0; i < 4; i++) {
    int xx = x + dx[i], yy = y + dy[i];
    if (xx > 0 && yy > 0 && xx <= n && yy <= n && (!v[xx][yy]) &&
        (!a[xx][yy])) {
      v[xx][yy] = 1;
      path.push_back({xx, yy});
      dfs(xx, yy);
      path.pop_back();
      v[xx][yy] = 0;
    }
  }
}

void solve() {
  cin >> n >> m >> t;
  cin >> sx >> sy >> ex >> ey;
  for (int i = 0; i < t; i++) {
    int xx, yy;
    cin >> xx >> yy;
    a[xx][yy] = 1;
  }
  v[sx][sy] = 1;
  dfs(sx, sy);

  cout << cnt << endl;

  // for (int i = 0; i < paths.size(); i++) {
  //   for (int j = 0; j < paths[i].size(); j++) {
  //     cout << paths[i][j].first << " " << paths[i][j].second << endl;
  //   }
  //   cout << "--" << endl;
  // }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}