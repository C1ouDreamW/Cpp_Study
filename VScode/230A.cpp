#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int s, n;
  cin >> s >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    mp[x] += y;
  }
  for (auto i : mp) {
    if (s > i.first) {
      s += i.second;
    } else {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}