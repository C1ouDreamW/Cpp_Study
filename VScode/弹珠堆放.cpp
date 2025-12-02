#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int x = 1;
  int floor = 0;
  int cost = 0;
  int cnt = 0;
  for (int i = 1; cost <= 20230610; i += x) {
    cnt++;
    x++;
    cost += i;
    cout << cnt << " " << cost << endl;
  }
  // 494
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}