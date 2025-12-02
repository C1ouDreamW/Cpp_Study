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
  cin >> n;
  if (n == 0) {
    cout << 1 << endl;
    return;
  }
  int cnt = (n / 15) * 3;
  if (n % 3 == n % 5) {
    cnt++;
  }
  n %= 15;
  if (n >= 3) {
    cnt += 3;
  } else {
    cnt += n;
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