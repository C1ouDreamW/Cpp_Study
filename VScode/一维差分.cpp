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
  vector<int> a(n + 1), b(n + 2);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    int l, r, d;
    cin >> l >> r >> d;
    b[l] += d;
    b[r + 1] -= d;
  }
  int temp = 0;
  for (int i = 1; i <= n; i++) {
    temp += b[i];
    cout << a[i] + temp << " ";
  }
  cout << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}