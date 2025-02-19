#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const string s = "yizhong";
const int N = 101;
vector<vector<char>> ans(N, vector<char>(N, '*'));
char a[N][N];
int n;

void dfs(int x, int y) {
  for (int k = 0; k < 8; k++) {
    int idx = 0;
    for (int i = 0; i < 7; i++) {
      int xx = x + dx[k] * i, yy = y + dy[k] * i;
      if ((xx < 0 || yy < 0 || xx >= n || yy >= n)) {
        break;
      }
      if (a[xx][yy] != s[idx++]) {
        break;
      }
    }
    if (idx == 7) {
      idx = 0;
      for (int i = 0; i < 7; i++) {
        int xx = x + dx[k] * i, yy = y + dy[k] * i;
        ans[xx][yy] = s[idx++];
      }
    }
  }
}

void solve() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] == 'y') {
        dfs(i, j);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
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