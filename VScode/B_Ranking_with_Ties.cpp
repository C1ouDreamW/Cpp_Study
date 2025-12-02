#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  vector<int> p(n), s_p(n), rank(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    s_p[i] = p[i];
  }
  int r = 1;
  sort(s_p.begin(), s_p.end());
  s_p.erase(unique(s_p.begin(), s_p.end()), s_p.end());

  for (int i = s_p.size() - 1; i >= 0; i--) {
    int k = 0;
    int x = s_p[i];
    for (int i = 0; i < n; i++) {
      if (p[i] == x) {
        k++;
        rank[i] = r;
      }
    }
    r += k;
  }

  for (int i = 0; i < n; i++) {
    cout << rank[i] << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}