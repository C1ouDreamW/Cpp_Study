#include <bits/stdc++.h>
using namespace std;
#define int long long

struct node {
  vector<int> b;
  int sum;
};

bool cmp(node &A, node &B) { return A.sum > B.sum; }

void solve() {
  int n, m;
  cin >> n >> m;
  vector<node> a(n, {vector<int>(m), 0});
  vector<int> sum(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i].b[j];
      a[i].sum += a[i].b[j];
    }
  }

  sort(a.begin(), a.end(), cmp);
  int sum_0 = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      sum_0 += a[i].b[j];
      ans += sum_0;
    }
  }

  cout << ans << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}