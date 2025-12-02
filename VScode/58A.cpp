#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  vector<bool> f(6);
  string s;
  cin >> s;
  f[0] = true;
  for (int i = 0; s[i]; i++) {
    if (s[i] == 'h') {
      f[1] = true;
    } else if (s[i] == 'e' && f[1]) {
      f[2] = true;
    } else if (s[i] == 'l' && f[2] && !f[3]) {
      f[3] = true;
    } else if (s[i] == 'l' && f[3]) {
      f[4] = true;
    } else if (s[i] == 'o' && f[4]) {
      f[5] = true;
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}