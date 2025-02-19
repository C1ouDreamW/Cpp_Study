#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int n;
bool isFind = true;

void dfs(int x, int y, vector<vector<int>> &a, vector<vector<bool>> &flag) {
  if (a[x][y] == -1) {
    isFind = false;
    return;
  }

  for (int i = 0; i < 4; i++) {
    if (isFind) {
      int xx = x + dx[i], yy = y + dy[i];
      if (xx >= 0 && yy >= 0 && xx <= n + 1 && yy <= n + 1 && (!flag[xx][yy])) {
        if (a[xx][yy] == 1) {
          continue;
        }
        flag[xx][yy] = true;
        dfs(xx, yy, a, flag);
      }
    } else {
      break;
    }
  }
}

void solve() {
  cin >> n;
  vector<vector<int>> a(n + 2, vector<int>(n + 2, -1));
  vector<vector<bool>> flag(n + 2, vector<bool>(n + 2, false));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (a[i][j] == 0) {
        if (!flag[i][j]) {
          isFind = true;
          dfs(i, j, a, flag);
          if (isFind) {
            queue<PII> q;
            q.push({i, j});
            a[i][j] = 2;
            while (!q.empty()) {
              int x = q.front().first, y = q.front().second;
              q.pop();
              for (int i = 0; i < 4; i++) {
                int xx = x + dx[i], yy = y + dy[i];
                if (a[xx][yy] == 0) {
                  a[xx][yy] = 2;
                  q.push({xx, yy});
                }
              }
            }
            for (int i = 1; i <= n; i++) {
              for (int j = 1; j <= n; j++) {
                cout << a[i][j] << " ";
              }
              cout << endl;
            }
            return;
          }
        }
      }
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}