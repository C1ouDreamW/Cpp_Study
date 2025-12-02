#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int a1, a2, a3, x;
  cin >> a1 >> a2 >> a3 >> x;
  int mm = max(max(a1, a2), a3);
  if (x == 1) {
    if (mm == a1) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  } else if (x == 2) {
    if (mm == a2) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  } else {
    if (mm == a3) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
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