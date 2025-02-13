#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, m;
int cnt = 0;

void dfs(int x, int y) {
  if (x == n && y == m) {
    cnt++;
    return;
  } else if (x > n || y > m) {
    return;
  }
  int xx, yy;
  xx = x, yy = y + 1;
  if (!(xx % 2 == 0 && yy % 2 == 0)) {
    dfs(xx, yy);
  }

  xx = x + 1, yy = y;
  if (!(xx % 2 == 0 && yy % 2 == 0)) {
    dfs(xx, yy);
  }
}

void solve() {
  cin >> n >> m;
  dfs(1, 1);

  cout << cnt << endl;
}

signed main() {
  solve();
  return 0;
}