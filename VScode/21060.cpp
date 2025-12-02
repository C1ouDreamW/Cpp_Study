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
  int cnt = 0;
  int cnt_1 = 0;
  for (int i = 0; s[i]; i++) {
    if (s[i] == '1')
      cnt_1++;
  }
  for (int i = 0; s[i]; i++) {
    if (s[i] == '1')
      cnt += cnt_1 - 1;
    else {
      cnt += cnt_1 + 1;
    }
  }
  cout << cnt << endl;
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