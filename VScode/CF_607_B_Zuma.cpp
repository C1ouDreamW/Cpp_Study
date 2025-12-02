#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 1010;
int f[N][N];
int a[N], b[N];

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = n; i >= 1; i--) {
    b[n - i + 1] = a[i];
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      f[i][j] = max(f[i - 1][j], f[i][j - 1]);
      if (a[i] == b[j]) {
        f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
      }
    }
  }
  // cout << "f = " << f[n][n] << endl;
  if (f[n][n] == 1) {
    cout << n << endl;
  } else if (f[n][n] == n) {
    cout << 1 << endl;
  } else if (f[n][n] == n - 1) {
    cout << 2 << endl;
  } else {
    cout << n - f[n][n] << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}