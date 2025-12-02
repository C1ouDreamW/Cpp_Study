#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string t;
  cin >> t;
  string u;
  cin >> u;
  int n = t.size(), m = u.size();
  bool f = false;
  for (int i = 0; i <= n - m; i++) {
    bool temp = true;
    for (int j = 0; j < m; j++) {
      if (t[i + j] != u[j] && t[i + j] != '?') {
        temp = false;
        break;
      }
    }
    if (temp) {
      f = true;
      break;
    }
  }
  if (f) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}