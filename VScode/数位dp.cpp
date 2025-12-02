#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string n;
  cin >> n;
  int cnt = 0;
  for (int i = n.size() - 1; i >= 0; i--) {
    if ((n[i] - '0') % 2 == 0) {
      cout << cnt << endl;
      return;
    }
    cnt++;
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