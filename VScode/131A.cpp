#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
×¢Òâ¶ÁÌâ
*/

void solve() {
  string s;
  cin >> s;
  bool isfb;
  if (s[0] >= 'a' && s[0] <= 'z') {
    isfb = false;
  } else
    isfb = true;
  if (s.size() == 1) {
    if (isfb) {
      char c = s[0] - ('A' - 'a');
      cout << c << endl;
    } else {
      char c = s[0] + ('A' - 'a');
      cout << c << endl;
    }
    return;
  }

  bool isB = true, isL = true;
  for (int i = 1; s[i]; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      isB = false;
    } else {
      isL = false;
    }
  }
  if (isB && !isL) {
    if (!isfb) {
      s[0] += ('A' - 'a');
    } else {
      s[0] -= ('A' - 'a');
    }
    for (int i = 1; s[i]; i++) {
      s[i] += ('a' - 'A');
    }
    cout << s << endl;
    return;
  }
  cout << s << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}