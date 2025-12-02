#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
用最强的一直淘汰其他人
*/

void solve() {
  int n, j, k;
  cin >> n >> j >> k;
  j--;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int x = a[j];
  sort(a.begin(), a.end());
  int max_v = a.back();
  if (x == max_v) {
    cout << "YES" << endl;
    return;
  }
  if (k == 1) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}