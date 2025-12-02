#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  vector<vector<PII>> v(3, vector<PII>(n * 2));
  for (int i = 0; i < n * 2 - 1; i += 2) {
    for (int j = 0; j < 3; j++) {
      cin >> v[j][i].first;
      v[j][i].second = 0;
    }
    for (int j = 0; j < 3; j++) {
      cin >> v[j][i + 1].first;
      v[j][i + 1].second = 1;
    }
    for (int j = 0; j < 3; j++) {
      if (v[j][i].first > v[j][i + 1].first)
        swap(v[j][i].first, v[j][i + 1].first);
    }
  }
  int ans = 0;
  for (int i = 0; i < 3; i++) {
    int cnt = 0;
    sort(v[i].begin(), v[i].end());
    for (int j = 0; j < n * 2; j++) {
      if (!v[i][j].second) {
        cnt++;
      } else {
        cnt--;
      }
      ans = max(ans, cnt);
    }
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