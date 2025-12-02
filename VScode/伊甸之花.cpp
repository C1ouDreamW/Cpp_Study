#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, m;
  cin >> n >> m;
  bool f1 = true, f2 = true;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x + 1 > m)
      f1 = false;
    if (x - 1 < 1)
      f2 = false;
  }
  if (f1 || f2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}