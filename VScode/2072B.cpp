#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  string s;
  cin >> n >> s;
  if (s.size() <= 2) {
    cout << 0 << endl;
    return;
  } else if (s.size() == 3) {
    if (count(s.begin(), s.end(), '_') == 1) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
    return;
  }
  int sum = 0;
  int a = 0, b = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '_')
      a++;
    else
      b++;
  }

  cout << (b / 2) * (b - (b / 2)) * a << endl;
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