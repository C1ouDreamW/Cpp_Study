#include <bits/stdc++.h>
using namespace std;
#define int long long

const int n = 3;

// 分类讨论
// 一共九个格子，两个人下棋一样多，有：1,2,3,4 四种棋子数量
// 1.两颗
// 直接赢
// 2.四颗
//
// 3.六颗
//
// 4.八颗

int dx[] = {1, 2, 3, 1, 2, 3};
int dy[] = {1, 2, 3, 3, 2, 1};

void solve() {
  vector<vector<char>> a(n + 1, vector<char>(n + 1));
  vector<pair<int, int>> p;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
      if (a[i][j] == 'G') {
        cnt++;
      }
      if (a[i][j] == 'X') {
        p.push_back({i, j});
      }
    }
  }
  cnt = 9 - cnt;

  if (cnt == 2 || cnt == 4) { //
    cout << "Yes" << endl;
    return;
  } else if (cnt == 6 || cnt == 8) { // 6 8
    for (int i = 1; i <= n; i++) {
      int cnt_x = 0, cnt_g = 0;
      for (int j = 1; j <= n; j++) {
        if (a[i][j] == 'X') {
          cnt_x++;
        }
        if (a[i][j] == 'G') {
          cnt_g++;
        }
      }
      if (cnt_x + cnt_g == 3) {
        if (cnt_x >= 1) {
          cout << "Yes" << endl;
          return;
        }
      }
    }
    for (int i = 1; i <= n; i++) {
      int cnt_x = 0, cnt_g = 0;
      for (int j = 1; j <= n; j++) {
        if (a[j][i] == 'X') {
          cnt_x++;
        }
        if (a[j][i] == 'G') {
          cnt_g++;
        }
      }
      if (cnt_x + cnt_g == 3) {
        if (cnt_x >= 1) {
          cout << "Yes" << endl;
          return;
        }
      }
    }
    // 对角线
    int cnt_x = 0, cnt_g = 0;
    for (int i = 0; i < 3; i++) {
      if (a[dx[i]][dy[i]] == 'X') {
        cnt_x++;
      } else if (a[dx[i]][dy[i]] == 'G') {
        cnt_g++;
      }
    }
    if (cnt_x + cnt_g == 3) {
      if (cnt_x >= 1) {
        cout << "Yes" << endl;
        return;
      }
    }

    cnt_x = 0, cnt_g = 0;
    for (int i = 3; i < 6; i++) {
      if (a[dx[i]][dy[i]] == 'X') {
        cnt_x++;
      } else if (a[dx[i]][dy[i]] == 'G') {
        cnt_g++;
      }
    }
    if (cnt_x + cnt_g == 3) {
      if (cnt_x >= 1) {
        cout << "Yes" << endl;
        return;
      }
    }
  } else if (cnt == 0) {
    cout << "Yes" << endl;
    return;
  }

  cout << "No" << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}