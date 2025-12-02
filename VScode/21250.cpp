#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  map<char, int> mp;
  string s;
  cin >> s;
  for (int i = 0; s[i]; i++) {
    mp[s[i]]++;
  }
  for (int i = 0; i < mp['T']; i++) {
    cout << 'T';
  }
  for (auto i : mp) {
    if (i.first == 'T') {
      continue;
    } else {
      for (int j = 0; j < i.second; j++) {
        cout << i.first;
      }
    }
  }
  cout << endl;
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