#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
奇数+奇数 = 偶数
奇数+偶数 = 奇数
偶数+偶数 = 偶数

1 1 2
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  if ((a.front() + a.back()) % 2 == 0) {
    cout << 0 << endl;
    return;
  }
  if (n == 1) {
    cout << (a[0] % 2 ? 1 : 0) << endl;
    return;
  }
  int x = 0, y = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] % 2 == !(a.front() % 2)) {
      x = i;
      break;
    }
  }
  for (int i = n - 2; i >= 0; i--) {
    if (a[i] % 2 == !(a.back() % 2)) {
      y = n - i - 1;
      break;
    }
  }
  cout << min(x, y) << endl;
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