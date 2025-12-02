#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  int cnt = 1;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[n - 1 - i] = a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[n - 1 - i] = a[i];
    if (a[i] != b[i]) {
      cnt = 2;
      break;
    }
  }
  sort(a.begin(), a.end());
  cout << cnt << " " << a.back() - a.front() << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}