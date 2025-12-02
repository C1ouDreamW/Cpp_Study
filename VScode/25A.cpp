#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  bool f = false;
  int cnt_1 = 0, cnt_2 = 0;
  int idx_1 = 0, idx_2 = 0;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      cnt_1++;
      idx_1 = i;
    } else {
      cnt_2++;
      idx_2 = i;
    }
    if (cnt_1 >= 2) {
      f = true;
    }
    if (cnt_2 >= 2) {
      f = false;
    }
  }
  if (f) {
    cout << idx_2 << endl;
  } else {
    cout << idx_1 << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}