#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string s;
  cin >> s;
  vector<int> a;
  int cnt = 0;
  for (int i = 0; s[i]; i++) {
    if (s[i] - '0' == 0) {
      cnt++;
    } else {
      a.push_back(s[i] - '0');
    }
  }
  sort(a.begin(), a.end());
  cout << a.front();
  for (int i = 0; i < cnt; i++) {
    cout << 0;
  }
  for (int i = 1; i < a.size(); i++) {
    cout << a[i];
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