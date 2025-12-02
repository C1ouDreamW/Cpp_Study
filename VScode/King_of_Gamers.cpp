#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

inline int gcd(int a, int b) {
  int r;
  while (b > 0) {
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int win, maxn;
void solve() {
  int n, a, b;
  cin >> n >> a >> b;
  int g = gcd(a, b);
  a /= g;
  b /= g;
  if (a == 0) {
    cout << 1 << endl;
    return;
  }
  int cur = n / b;
  int sum = a * cur;
  int max_n = n % b;
  int ans = (n * a) / b;
  win = 0;
  for (int i = 0; i < max_n; i++) {
    if (i == 0) {
      win++;
      continue;
    }
    if (win * b <= i * a) {
      win++;
    }
    if (win == a || win == ans + 1 - sum) {
      break;
    }
  }
  sum += win;

  // cout << sum << " " << ans << " " << ans + 1 << endl;
  cout << sum << endl;
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