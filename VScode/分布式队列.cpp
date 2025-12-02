#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  vector<deque<int>> dv(n);
  vector<int> idx(n + 1);
  string s;
  while (cin >> s) {
    if (s == "add") {
      int x;
      cin >> x;
      dv[0].push_back(x);
    } else if (s == "sync") {
      int x;
      cin >> x;
      if (idx[x] < dv[0].size()) {
        dv[x].push_back(dv[0][idx[x]]);
        idx[x]++;
      }
    } else if (s == "query") {
      int ans = 1e9 + 7;
      for (int i = 1; i < n; i++) {
        ans = min((int)dv[i].size(), ans);
      }
      cout << ans << endl;
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