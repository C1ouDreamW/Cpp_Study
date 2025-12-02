#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string s; // 至少 9 8 7 6 5 4 3 2 1 0
            /*
            9
            9 8
            9 8 7
            9 8 7 6
            9 8 7 6 5
            */
  cin >> s;
  vector<int> a(11);
  for (int i = 1; i <= 10; i++) {
    a[i] = s[i - 1] - '0';
  }
  sort(a.begin() + 1, a.end());
  vector<bool> f(11);
  string ans = "";
  for (int i = 1; i <= 10; i++) {
    for (int j = 1; i <= 10; j++) {
      if (!f[j]) {
        if (a[j] >= 10 - i) {
          f[j] = true;
          ans += to_string(a[j]);
          break;
        }
      }
    }
  }
  cout << ans << endl;
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