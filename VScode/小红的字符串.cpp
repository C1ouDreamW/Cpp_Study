#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string s;
  cin >> s;
  int cnt = 0;
  int n = s.size();
  for (int i = 0; i < n / 2; i++) {
    if (s[i] == s[n - i - 1])
      continue;
    else {
      cnt += min(abs(s[i] - s[n - i - 1]), 26 - abs(s[i] - s[n - i - 1]));
    }
  }
  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}