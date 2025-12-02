#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
int n;
const int N = 2010;
int a[N];
void solve() {
  vector<vector<int>> table(N, vector<int>(N));
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int max_sum = 0;
  for (int k = 1; k <= n; k++) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      int x = max(k, i), y = min(k, i);
      if (!table[x][y]) {
        table[x][y] = a[x] ^ a[y];
      }
      sum += table[x][y];
    }
    max_sum = max(max_sum, sum);
  }
  cout << max_sum << endl;
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