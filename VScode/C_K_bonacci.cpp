#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
const int MOD = 1e9;

int n, k;
void solve() {
  cin >> n >> k;
  int l = 0;
  vector<int> a(n + 1);
  if (n < k) {
    cout << 1 << endl;
    return;
  }
  for (int i = 0; i < k; i++) {
    a[i] = 1;
  }
  a[k] = k;
  for (int i = k + 1; i <= n; i++) {
    a[i] = ((a[i - 1] + a[i - 1]) % MOD - a[l++]) % MOD;
  }
  cout << a[n] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}