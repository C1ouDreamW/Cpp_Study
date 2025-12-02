#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
(a + b - 3) % 4 == 0
4 8 12 16 20 24 28 32 36 40
a + b ==
3 7 11 15 19 23 27 31 35 39 43

0 1 2 3 4 5 6 7 8 9 10 11
*/

void solve() {
  int n;
  cin >> n;
  if (n % 4 == 0) {
    cout << "Bob" << endl;
  } else {
    cout << "Alice" << endl;
  }
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