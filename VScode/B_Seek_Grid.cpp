#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 55;
char A[N][N], B[N][N];
int n, m;

void solve() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> B[i][j];
    }
  }
  for (int a = 1; a <= n - m + 1; a++) {
    for (int b = 1; b <= n - m + 1; b++) {
      bool flag = false;
      for (int i = 1; i <= m; i++) {
        if (flag)
          break;
        for (int j = 1; j <= m; j++) {
          if (!(A[a + i - 1][b + j - 1] == B[i][j])) {
            flag = true;
            break;
          }
        }
      }
      if (!flag) {
        cout << a << " " << b << endl;
        return;
      }
    }
  }
}

signed main() {
  solve();
  return 0;
}