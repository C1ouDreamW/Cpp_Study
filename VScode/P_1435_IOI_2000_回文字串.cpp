#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 1010;
int f[N][N];

void solve() {
  string s2;
  cin >> s2;
  string s1 = s2;
  reverse(s2.begin(), s2.end());
  int n = s1.size();
  s1 = " " + s1;
  s2 = " " + s2;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      f[i][j] = max(f[i - 1][j], f[i][j - 1]);
      if (s1[i] == s2[j]) {
        f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
      }
    }
  }
  cout << n - f[n][n] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}