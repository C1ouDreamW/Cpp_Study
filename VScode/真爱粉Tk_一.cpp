#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  double n;
  cin >> n;
  for (double i = 1; i * 2.5 <= 1000000000; i++) {
    if (i * 2.5 == n) {
      cout << "Yes" << endl;
      break;
    }
    if (i * 2.5 > n) {
      cout << "No" << endl;
      break;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}