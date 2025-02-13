#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 12;
int n, cnt = 0;
bool l[N], u[2 * N], v[2 * N];

void dfs(int m) {
  if (m == n) {
    cnt++;
    return;
  }

  for (int i = 0; i < n; i++) {
    if (l[i] || u[i + m] || v[m - i + n])
      continue;
    l[i] = u[i + m] = v[m - i + n] = true;
    dfs(m + 1);
    l[i] = u[i + m] = v[m - i + n] = false;
  }
}

void solve() {
  cin >> n;
  dfs(0);
  cout << cnt << endl;
}

signed main() {
  solve();
  return 0;
}