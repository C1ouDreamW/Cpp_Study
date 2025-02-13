#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, q;
int cnt = 0;

void solve() {
  cin >> n >> q;
  vector<int> a(n + 1);
  vector<int> b(n + 1, 1);
  for (int i = 1; i <= n; i++) {
    a[i] = i;
  }
  while (q--) {
    int x, p, h;
    cin >> x;
    if (x == 1) {
      cin >> p >> h;
      b[a[p]]--;
      if (b[a[p]] == 1) {
        cnt--;
      }
      a[p] = h;
      if (b[a[p]] == 1) {
        cnt++;
      }
      b[a[p]]++;
    } else if (x == 2) {
      cout << cnt << endl;
    }
  }
}

signed main() {
  solve();
  return 0;
}