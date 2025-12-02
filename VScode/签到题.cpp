#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
int n, m;

void solve() {
  cin >> n >> m;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a.begin() + 1, a.end());
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int min_val = a[i];
    int cnt = 0;
    while (i + cnt <= n && a[i + cnt] == min_val) {
      cnt++;
    }
    int now = n - i + 1;
    if (now >= m) {
      ans = max(ans, min(m, cnt));
    }
    i += (cnt - 1);
  }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}