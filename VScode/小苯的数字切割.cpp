#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
/*
1234
4321
*/
void solve() {
  string s;
  cin >> s;
  cout << max(stoi(s.substr(0, s.size() - 1)) + stoi(s.substr(s.size() - 1, 1)),
              stoi(s.substr(0, 1)) + stoi(s.substr(1, s.size() - 1)));

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