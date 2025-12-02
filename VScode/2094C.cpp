#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 1010;
int G[N][N];
int n;

void solve() {
  vector<int> ans(2 * N);
  vector<bool> num(2 * N);
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> G[i][j];
      ans[i + j] = G[i][j];
      num[G[i][j]] = true;
    }
  }
  for (int i = 1; i <= 2 * n; i++) {
    if (!num[i]) {
      ans[1] = i;
      break;
    }
  }
  for (int i = 1; i <= 2 * n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
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