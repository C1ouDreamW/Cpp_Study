#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<int> pre(n + 1);
  for (int i = 1; i < n; i++) {
    pre[i] = abs((s[i] - s[i - 1]));
  }
  int sum = 0, p = 0;
  for (int i = 1; i < k; i++) {
    p += pre[i];
  }
  sum += p;
  for (int i = k; i < n; i++) {
    p -= pre[i - k + 1];
    p += pre[i];
    sum += p;
  }
  cout << sum << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}