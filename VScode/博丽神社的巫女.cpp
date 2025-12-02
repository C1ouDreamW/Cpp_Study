#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, x;
  cin >> n >> x;
  int cnt = 0;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (sum >= a[i]) {

    } else {
      if (a[i] - sum <= x) {
        x -= a[i] - sum;
        sum = a[i];
      } else {
        break;
      }
    }
    cnt++;
  }
  cout << cnt << " " << x << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}