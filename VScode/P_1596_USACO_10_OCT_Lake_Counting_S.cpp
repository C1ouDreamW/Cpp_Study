#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> a(n, vector<char>(m));
  vector<vector<bool>> flag(n, vector<bool>(m));
  vector<PII> waters;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      if (a[i][j] == 'W') {
        waters.push_back({i, j});
      }
    }
  }
  int cnt = 0;
  for (int i = 0; i < (int)waters.size(); i++) {
    int x = waters[i].first, y = waters[i].second;
    if (!flag[x][y]) {
      cnt++;
      queue<PII> q;
      q.push({x, y});
      flag[x][y] = true;
      while (!q.empty()) {
        int xx = q.front().first, yy = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++) {
          int xxx = xx + dx[i], yyy = yy + dy[i];
          if (xxx >= 0 && yyy >= 0 && xxx < n && yyy < m && (!flag[xxx][yyy])) {
            if (a[xxx][yyy] == '.') {
              continue;
            }
            flag[xxx][yyy] = true;
            q.push({xxx, yyy});
          }
        }
      }
    }
  }
  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}