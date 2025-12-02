#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
const int MAX_N = 100010;
int a[MAX_N], b[MAX_N];
int c[MAX_N];
void solve() {
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    mp[i] = a[i];
  }
  for (int i = 1; i <= n; i++) {
    cin >> b[i];
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}