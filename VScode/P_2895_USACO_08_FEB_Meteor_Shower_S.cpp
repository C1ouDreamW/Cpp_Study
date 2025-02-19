#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
int dx[5] = {0, 0, 0, 1, -1};
int dy[5] = {0, 1, -1, 0, 0};
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

vector<vector<int>> a(310, vector<int>(310, -1));
int times[310][310];
int v[310][310];
queue<int> q1, q2;

void solve() {
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int x, y, t;
    cin >> x >> y >> t;
    for (int j = 0; j < 5; j++) {
      int xx = x + dx[j], yy = y + dy[j];
      if (xx >= 0 && yy >= 0) {
        if (a[xx][yy] == -1 || a[xx][yy] > t) {
          a[xx][yy] = t;
        }
      }
    }
  }

  int x = 0, y = 0;
  int time = 0;
  q1.push(x), q2.push(y);
  v[0][0] = -1;
  while (!q1.empty()) {
    x = q1.front();
    y = q2.front();
    q1.pop();
    q2.pop();
    time = times[x][y] + 1;

    for (int i = 1; i < 5; i++) {
      int xx = x + dx[i], yy = y + dy[i];
      if (xx >= 0 && yy >= 0 && (!v[xx][yy])) {
        if (a[xx][yy] == -1) {
          cout << time << endl;
          return;
        }
        if (time < a[xx][yy]) {
          q1.push(xx);
          q2.push(yy);
          v[xx][yy] = 1;
          times[xx][yy] = time;
        }
      }
    }
  }

  cout << -1 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();

  return 0;
}