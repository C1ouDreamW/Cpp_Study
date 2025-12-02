#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int ksc(int a, int b, int p) {
  int res = 0;
  a %= p;
  while (b) {
    if (b & 1) {
      res = (res + a) % p;
    }
    a = (a * 2) % p;
    b >>= 1;
  }
  return res % p;
}

int ksm(int a, int b, int p) {
  int res = 1;
  a %= p;
  while (b) {
    if (b & 1) {
      res = ksc(res, a, p);
    }
    a = ksc(a, a, p);
    b >>= 1;
  }
  return res % p;
}

void solve() {
  int a, b, p;
  cin >> a >> b >> p;
  int ans = ksm(a, b, p);
  cout << ans << endl;
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