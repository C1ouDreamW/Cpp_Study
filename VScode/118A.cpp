#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
删除所有 A O Y E U I
在其余字母前加 .
并转换大写
*/
void solve() {
  string s;
  cin >> s;
  vector<bool> f(s.size(), true);
  for (int i = 0; s[i]; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += ('a' - 'A');
    }
    if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' ||
        s[i] == 'u' || s[i] == 'i') {
      f[i] = false;
    }
  }
  for (int i = 0; i < s.size(); i++) {
    if (f[i]) {
      cout << '.' << s[i];
    }
  }
  cout << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}