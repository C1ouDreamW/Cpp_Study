#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  // -1 0 1 0
  if ((a == -1 && b == 0 && c == 1) || (a == 0 && b == 1 && c == 0) ||
      (a == 1 && b == 0 && c == -1) || (a == 0 && b == -1 && c == 0)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}