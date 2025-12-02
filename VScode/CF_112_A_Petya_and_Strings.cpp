#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string s1, s2;
  cin >> s1 >> s2;
  for (int i = 0; s1[i]; i++) {
    if (s1[i] <= 'Z') {
      s1[i] += ('a' - 'A');
    }
  }
  for (int i = 0; s2[i]; i++) {
    if (s2[i] <= 'Z') {
      s2[i] += ('a' - 'A');
    }
  }
  if (s1 < s2) {
    cout << -1 << endl;
  } else if (s1 > s2) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}