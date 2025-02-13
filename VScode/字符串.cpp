#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> a(26);

bool ff() {
  for (int i = 0; i < 26; i++) {
    if (a[i] == 0) {
      return false;
    }
  }
  return true;
}

void solve() {
  string s;
  cin >> s;
  int cnt = 1e6 + 7;
  int l = 0, r = 0;
  for (r = 0; r < (int)s.size(); r++) {
    a[s[r] - 'a']++;
    while (ff()) {
      cnt = min(cnt, r - l + 1);
      a[s[l] - 'a']--;
      l++;
    }
  }

  cout << cnt << endl;
}

signed main() {
  solve();
  return 0;
}