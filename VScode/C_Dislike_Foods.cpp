#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> K(n + 1);
  vector<int> len(m), idx(m);
  int cnt = 0;
  for (int i = 0; i < m; i++) {
    cin >> len[i];
    idx[i] = len[i];
    for (int j = 0; j < len[i]; j++) {
      int xx;
      cin >> xx;
      K[xx].push_back(i);
    }
  }
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    for (int j = 0; j < K[b].size(); j++) {
      idx[K[b][j]]--;
      if (!idx[K[b][j]]) {
        cnt++;
      }
    }
    cout << cnt << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}