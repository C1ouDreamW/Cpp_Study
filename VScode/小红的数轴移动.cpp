#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, x;
  cin >> n >> x;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    if (x > 0) {
      x -= t;
    } else if (x < 0) {
      x += t;
    } else {
      break;
    }
    cnt += t;
  }
  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}