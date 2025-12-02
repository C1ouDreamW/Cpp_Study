#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, k;
  cin >> n >> k;
  int cnt = 0;
  int x1 = k, x2 = k - 1;
  if (n % 2 == 0) {
    cnt += n / (k - 1);
    n %= (k - 1);
    if (n > 0) {
      cnt++;
    }
  } else {
    cnt++;
    n -= k;
    cnt += n / (k - 1);
    n %= (k - 1);
    if (n > 0) {
      cnt++;
    }
  }
  cout << cnt << endl;
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