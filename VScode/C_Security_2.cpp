#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
/*
按下A按钮的次数
0123456789
按下B按钮的次数为S.size次
14

407
730
400



*/

void solve() {
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = s.size() - 2; i >= 0; i--) {
    int x = s[i] - '0', y = s[i + 1] - '0';
    if (x > y) {
      cnt += x - y;
    } else if (x < y) {
      cnt += (10 - (y - x));
    } else {
      continue;
    }
    s[i] = ((10 - (y - x)) + '0');
  }
  cout << cnt + s.size() + (s.back() - '0') << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}