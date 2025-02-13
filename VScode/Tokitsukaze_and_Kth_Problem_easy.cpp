#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, p, k;
  cin >> n >> p >> k;
  vector<int> a(n);
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  while (k--) {
    if (!pq.empty()) {
      cout << pq.top() << " ";
      pq.pop();
    } else {
      cout << -1 << " ";
    }
  }
  cout << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}