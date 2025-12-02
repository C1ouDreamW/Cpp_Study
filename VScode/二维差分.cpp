#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<vector<int>> a(n + 10, vector<int>(m + 10)),
      b(n + 10, vector<int>(m + 10));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < q; i++) {
    int x1, y1, x2, y2, d;
    cin >> x1 >> y1 >> x2 >> y2 >> d;
    b[x1][y1] += d;
    b[x2 + 1][y1] -= d;
    b[x1][y2 + 1] -= d;
    b[x2 + 1][y2 + 1] += d;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cout << a[i][j] + b[i][j] << " ";
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