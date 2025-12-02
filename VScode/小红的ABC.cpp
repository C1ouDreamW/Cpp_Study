#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

bool f(string &s) {
  string t = s;
  reverse(s.begin(), s.end());
  if (t == s)
    return true;
  else
    return false;
}

void solve() {
  string s;
  cin >> s;
  int ans = INT_MAX;
  for (int i = 0; i < s.size() - 1; i++) {
    for (int j = 1; i + j < s.size(); j++) {
      string ss = s.substr(i, j + 1);
      if (f(ss)) {
        ans = min(ans, (int)ss.size());
      }
    }
  }
  if (ans > 1000) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}