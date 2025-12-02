#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

// '.' is white , '#' is black
/*
1. 选择一个S中的格子改变它的颜色
2. 90度顺时针旋转S中的颜色

1,1 -> 4,1
1,2 -> 3,1
1,3 -> 2,1

2,3 -> 2,2

*/
int n;
void solve() {
  cin >> n;
  vector<vector<char>> s(n + 1, vector<char>(n + 1)),
      t(n + 1, vector<char>(n + 1)), s1(n + 1, vector<char>(n + 1)),
      s2(n + 1, vector<char>(n + 1)), s3(n + 1, vector<char>(n + 1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> s[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> t[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      s1[j][n - i + 1] = s[i][j];
      s2[n - i + 1][n - j + 1] = s[i][j];
      s3[n - j + 1][i] = s[i][j];
    }
  }
  int min_cnt = INT_MAX;
  int cnt_0 = 0, cnt_1 = 1, cnt_2 = 2, cnt_3 = 3;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (s[i][j] != t[i][j])
        cnt_0++;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (s1[i][j] != t[i][j])
        cnt_1++;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (s2[i][j] != t[i][j])
        cnt_2++;
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (s3[i][j] != t[i][j])
        cnt_3++;
    }
  }
  min_cnt = min(cnt_1, cnt_2);
  min_cnt = min(min_cnt, cnt_3);
  min_cnt = min(min_cnt, cnt_0);
  cout << min_cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}