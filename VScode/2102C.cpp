#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
牌号 0-n*n-1
排列在n*n的方格中
MEX = 网格中不出现的最小非负整数
使得所有子网格中MEX之和最大

让小的数尽可能连续得分散在不同子网格中
在最中间的子网格被更多网格包含
呈螺旋状由内向外排布

一层一层遍历
*/

const int MAX_N = 510;
int a[MAX_N][MAX_N];

void solve() {
  memset(a, 0, sizeof a);
  int n;
  cin >> n;
  int idx = n * n - 1;
  int max_line = n;
  for (int f = 1; f <= n / 2; f++) {
    for (int y = f; y <= n - f + 1; y++) {
      a[f][y] = idx--;
    }
    for (int x = f + 1; x <= n - f + 1; x++) {
      a[x][n - f + 1] = idx--;
    }
    for (int y = n - f; y >= f; y--) {
      a[n - f + 1][y] = idx--;
    }
    for (int x = n - f; x >= f + 1; x--) {
      a[x][f] = idx--;
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
