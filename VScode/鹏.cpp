#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  int cnt = 0;
  int temp = 0;
  cin >> temp;
  bool f = false;
  for (int i = 1; i < n; i++) {
    int x;
    cin >> x;
    if (x >= temp) {
      f = true;
    } else {
      if (f) {
        cnt++;
        f = false;
      }
    }
    temp = x;
  }
  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}