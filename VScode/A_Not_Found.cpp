#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string s;
  cin >> s;
  vector<bool> f(26);
  for (int i = 0; s[i]; i++) {
    f[s[i] - 'a'] = true;
  }
  for (int i = 0; i < 26; i++) {
    if (!f[i]) {
      char c = 'a' + i;
      cout << c << endl;
      return;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}