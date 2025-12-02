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
  s = "0" + s;
  int l = 1, r = n;
  int cnt = 0;
  while (l < r) {
    if (s[l] == '2' && s[r] == '5') {
      cnt++;
      l++, r--;
    }
    if (s[l] != '2') {
      l++;
    }
    if (s[r] != '5') {
      r--;
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