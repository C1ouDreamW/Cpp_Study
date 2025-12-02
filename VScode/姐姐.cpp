#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  bool isz = false;
  int b;
  cin >> b;
  int cnt = 1;
  for (int i = 0; i < n - 1; i++) {
    int x;
    cin >> x;
    if (b != x) {
      cnt++;
    }
    b = x;
  }
  if (cnt > 3) {
    cout << "NO" << endl;
  } else
    cout << "YES" << endl;
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