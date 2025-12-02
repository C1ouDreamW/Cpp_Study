#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  string a;
  cin >> a;
  int m;
  cin >> m;
  string b, c;
  cin >> b >> c;
  for (int i = 0; i < m; i++) {
    if (c[i] == 'V') {
      a = b[i] + a;
    } else {
      a += b[i];
    }
  }
  cout << a << endl;
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