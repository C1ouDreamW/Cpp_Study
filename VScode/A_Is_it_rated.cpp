#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {

  int r, x;
  cin >> r >> x;
  bool div1 = false, div2 = false;
  if (r >= 1600 && r <= 2999) {
    div1 = true;
  }
  if (r >= 1200 && r <= 2399) {
    div2 = true;
  }
  if (x == 1) {
    if (div1) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  } else {
    if (div2) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
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