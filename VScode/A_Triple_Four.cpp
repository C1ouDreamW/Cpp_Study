#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  int temp;
  int cnt = 0;
  bool ans = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (cnt == 0) {
      temp = x;
    }
    if (x == temp) {
      cnt++;
    } else {
      temp = x;
      if (cnt >= 3) {
        ans = 1;
      }
      cnt = 1;
    }
    if (cnt >= 3) {
      ans = 1;
    }
  }

  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}