#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
const int N = 200010;
int n, k;
int ans[N];
string s;
void solve() {
  cin >> n >> k >> s;
  for (int i = 0; s[i]; i++) {
    if (s[i] == 'o') {
      k--;
    }
  }

  for (int i = 1; i < n - 1; i++) {
    if (s[i] == '?') {
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}