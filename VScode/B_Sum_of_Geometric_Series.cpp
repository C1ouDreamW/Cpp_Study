#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int MAXN = 1e9;

int ksm(int a, int b) {
  int res = 1;
  while (b) {
    if ((b & 1) == 1) {
      res *= a;
      if (res > 1e9) {
        return -1;
      }
    }
    a = a * a;
  }
  return res;
}

void solve() {
  int n, m;
  cin >> n >> m;
  long double x = 0;
  for (int i = 0; i <= m; i++) {
    x += powl(n, i);
    if (x > MAXN) {
      cout << "inf" << endl;
      return;
    }
  }

  printf("%.0Lf", x);
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}