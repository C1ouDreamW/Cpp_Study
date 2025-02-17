#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, m;
  cin >> n >> m;
  int cnt = 0;
  vector<pair<int, int>> a;
  for (int i = 0; i < m; i++) {
    int v1, v2;
    cin >> v1 >> v2;
    if (v1 == v2) {
      cnt++;
      continue;
    }
    if (v1 > v2) {
      swap(v1, v2);
    }
    a.push_back({v1, v2});
  }
  sort(a.begin(), a.end());
  cnt += distance(unique(a.begin(), a.end()), a.end());

  cout << cnt << endl;
}

signed main() {
  solve();
  return 0;
}