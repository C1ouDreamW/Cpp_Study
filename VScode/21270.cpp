#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
mex = 0,1,2

0 如果不为0，mex = 0,max = min --> 三个数相同

1 存在一个0，且没有1，max - min = 1,min = 0,max = 1  --> 不可能

2 存在0,1 max - min = 2,min = 0,max = 2 --> 0 1 2 --> 不可能

3 存在 0 1 2 --> 2 - 0 = 0 --> 不可能


当存在0时，mex > 0,max>0,min = 0; mex = max 不可能
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  bool f = false;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 0) {
      f = true;
    }
    if (a[i] != 0 && a[i] != -1) {
      mp[a[i]]++;
    }
  }

  if (f || mp.size() > 1) {
    cout << "NO" << endl;
    return;
  }

  cout << "YES" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}