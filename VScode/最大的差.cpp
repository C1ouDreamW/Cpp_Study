#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  int max_v = INT_MIN, min_v = INT_MAX;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    max_v = max(max_v, x);
    min_v = min(min_v, x);
  }
  cout << max_v - min_v << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}