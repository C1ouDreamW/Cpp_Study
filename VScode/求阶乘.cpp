#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int check(int n) {
  int p = 0;
  while (n > 0) {
    p += n / 5;
    n /= 5;
  }
  return p;
}

void solve() {
  int k;
  cin >> k;
  int l = 1, r = 0x7fffffffffffffffL;
  while (l < r) {
    int mid = l + (r - l >> 1);
    if (check(mid) >= k) {
      r = mid;
    } else {
      l = mid + 1;
    }
  }
  int p = check(l);
  if (p == k) {
    cout << l << endl;
  } else {
    cout << -1 << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}