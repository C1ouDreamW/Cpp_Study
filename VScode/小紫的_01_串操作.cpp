#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string s;
  cin >> s;
  int cnt_0 = 0, cnt_1 = 0;
  if (s[0] - '0')
    cnt_1++;
  else
    cnt_0++;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] != s[i - 1]) {
      if (s[i] - '0')
        cnt_1++;
      else
        cnt_0++;
    }
  }
  if (cnt_0 + cnt_1 >= 6)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
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