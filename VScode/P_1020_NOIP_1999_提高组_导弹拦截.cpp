#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
dp[i][j]   前i个导弹中,末尾导弹为a[j]时，最多拦截数量
第i个导弹选  a[i] <= 上一个导弹
dp[i][i] = dp[i-1][j] + 1;

第i个导弹不选
dp[i][j] = dp[i-1][j];

*/
const int N = 10010;
int dp[N];

void solve() {
  vector<int> a = {INT_MAX};
  int x;
  while (cin >> x) {
    a.push_back(x);
  }
  int n = a.size();
  for (int i = 1; i <= n; i++) {
    for (int j = i - 1; j >= 0; j--) {
      if (a[i] <= a[j]) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
  }
  int m = 0;
  for (int i = 0; i < n; i++) {
    m = max(dp[i], m);
  }
  cout << m << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}