#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n + 10);
  vector<PII> p(m);
  for (int i = 0; i < m; i++) {
    int l, r;
    cin >> l >> r;
    p[i] = {l, r};
    a[l]++;
    a[r + 1]--;
  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    a[i] += a[i - 1];
    // cout << a[i] << " ";
    if (!a[i]) {
      ans++;
    }
  }

  for (int i = 0; i < m; i++) {
    int cnt = 0;
    for (int j = p[i].first; j <= p[i].second; j++) {
      if (a[j] == 1) {
        cnt++;
      }
    }
    cout << cnt + ans << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}