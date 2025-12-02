#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string s;
  cin >> s;
  s = "0" + s;
  int cnt = 0;

  if (s[1] == 'o') {
    cnt++;
  }
  char temp = s[1];
  for (int i = 2; i < s.size(); i++) {
    if (s[i] == temp) {
      cnt++;
    } else {
      temp = s[i];
    }
  }
  int n = (int)s.size() + cnt - 1;

  if (n % 2 == 0) {
    cout << cnt << endl;
  } else {
    cout << cnt + 1 << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}