#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
const int N = 100010;
int a[N], s[N];
int n;
int sum = 0;

void dfs(int u) {
  if (u == n - 1) {
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == 2) {
        int x = a[i] ^ a[i] + 1;
        a[i] = x;
        a[i + 1] = 0;
      }
    }
    sum += a[0];
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == 0) {
        sum += a[i + 1];
      } else if (s[i] == 1) {
        sum -= a[i + 1];
      }
    }
    return;
  }

  s[u] = 0;
  dfs(u + 1);
  s[u] = 1;
  dfs(u + 1);
  s[u] = 2;
  dfs(u + 1);
}

void solve() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  dfs(0);
  cout << sum << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}