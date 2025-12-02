#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<map<int, bool>> a(n + 1);
  while (q--) {
    int Q;
    cin >> Q;
    if (Q == 1) {
      int x, y;
      cin >> x >> y;
      a[x][y] = true;
    } else if (Q == 2) {
      int x;
      cin >> x;
      a[x][0] = true;
    } else if (Q == 3) {
      int x, y;
      cin >> x >> y;
      if (a[x][0] || a[x][y]) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}