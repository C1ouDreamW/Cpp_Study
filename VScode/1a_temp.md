#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = 0;
  priority_queue<int> pq;

  vector<int> c(n + 1, 0);
  vector<int> pre_min(n + 1, 0);

  for (int k = 1; k <= n; k++) {

    if (k % 2 != 0) {
      c[k] = c[k - 1] + a[k - 1];
    } else {
      c[k] = c[k - 1] - a[k - 1];
    }

    if (k >= 2) {
      int limit = pre_min[k - 2];
      if (c[k] > limit) {
        int cost = c[k] - limit;
        ans += cost;

        int top = pq.top();
        pq.pop();
        pq.push(top - cost);

        c[k] -= cost;
      }
    }

    pre_min[k] = min(pre_min[k - 1], c[k]);

    if (k % 2 != 0) {
      pq.push(a[k - 1]);
    }
  }

  cout << ans << endl;
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