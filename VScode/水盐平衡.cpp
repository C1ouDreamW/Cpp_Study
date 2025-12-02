#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
/*
a/b > c/d -> a*d>b*c
*/

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a * d > b * c)
    cout << "S" << endl;
  else
    cout << "Y" << endl;
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