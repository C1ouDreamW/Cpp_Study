#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, x, k;
  string s;
  vector<int> a(n + 1);
  cin >> n >> x >> k;
  for (int i = 1; i < n; i++) {
    char x;
    cin >> x;
    if (x == 'L') {
      a[i] = a[i - 1] - 1;
    } else
      a[i] = a[i - 1] + 1;
  }

  // 时间内能否首次到0
  int now = x;
  for (int i = 0; i < k; i++) {
  }
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