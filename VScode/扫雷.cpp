#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n + 1, vector<int>(m + 1, 0));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      char c;
      cin >> c;
      if (c == '*') {
        a[i][j] = '*';
        for (int k = 0; k < 8; k++) {
          int xx = i + dx[k], yy = j + dy[k];
          if (xx < 1 || xx > n || yy < 1 || yy > m || a[xx][yy] == '*') {
            continue;
          }
          a[xx][yy]++;
        }
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (a[i][j] == '*')
        cout << '*';
      else
        cout << a[i][j];
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