#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 55;
char a[N][N];
int n;

void solve() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int j = n + 1 - i;
    if (i > j) {
      continue;
    }
    int col = '#';
    if (i % 2 == 0) {
      col = '.';
    }
    for (int p = i; p <= j; p++) {
      for (int q = i; q <= j; q++) {
        a[p][q] = col;
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
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