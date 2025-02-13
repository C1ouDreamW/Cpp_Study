#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, t, k;

bool check(int mid) {
  if (mid > k + 1) {
    return false;
  }
  int a = mid * t + k;
  if (a <= n) {
    return true;
  }

  return false;
}

void solve() {

  cin >> n >> t >> k;
  if (k == n) {
    cout << 0 << endl;
    return;
  }
  int l = 0, r = n;
  while (l < r) {
    int mid = (l + r + 1) >> 1;
    if (check(mid))
      l = mid;
    else
      r = mid - 1;
  }
  cout << l << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}