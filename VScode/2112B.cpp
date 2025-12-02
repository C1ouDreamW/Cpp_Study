#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
50 100 2

若a[i+2]在a[i+1]和a[i]区间内，则一次即可
若不在，则前面区间没用
所以只有 0 -1 1三种情况
*/

void solve() {
  int n;
  cin >> n;
  int cnt = 0;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n - 1; i++) {
    if (abs(a[i] - a[i + 1]) <= 1) {
      cout << 0 << endl;
      return;
    }
  }
  for (int i = 0; i < n - 2; i++) {
    if (a[i + 2] >= min(a[i], a[i + 1]) - 1 &&
        a[i + 2] <= max(a[i], a[i + 1]) + 1) {
      cout << 1 << endl;
      return;
    }
  }
  for (int i = n - 1; i >= 2; i--) {
    if (a[i - 2] >= min(a[i], a[i - 1]) - 1 &&
        a[i - 2] <= max(a[i], a[i - 1]) + 1) {
      cout << 1 << endl;
      return;
    }
  }
  cout << -1 << endl;
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