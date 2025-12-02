#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

inline int gcd(int a, int b) { return b > 0 ? gcd(b, a % b) : a; }

void solve() {
  int n; // i 是三的倍数就可以被冻结
  cin >> n;
  if (n % 3 != 0 && n < 37) {
    cout << "Baka!" << endl;
    return;
  }
  int idx = n % 3;
  for (int i = 1; i <= n - idx; i++) {
    if (i == 37) {
      continue;
    }
    int x = i % 3;
    if (x == 1) {
      cout << i << " ";
    } else if (x == 2) {
      cout << i + 1 << " ";
    } else
      cout << i - 1 << " ";
  }
  if (n < 37) {
    return;
  }
  if (idx == 1) {
    cout << 37 << " " << n << endl;
  } else if (idx == 2) {
    cout << n - 1 << " " << 37 << " " << n << endl;
  } else {
    cout << 37 << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}