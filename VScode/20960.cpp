#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<bool> flag(n + 1);
  vector<int> ans(n + 1);
  int idx = n;
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == '<') {
      for (int j = 1; j <= n; j++) {
        if (!flag[j]) {
          flag[j] = true;
          ans[idx--] = j;
          break;
        }
      }
    } else {
      for (int j = n; j >= 1; j--) {
        if (!flag[j]) {
          flag[j] = true;
          ans[idx--] = j;
          break;
        }
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    if (!flag[i]) {
      cout << i << " ";
    }
  }
  for (int i = 2; i <= n; i++) {
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