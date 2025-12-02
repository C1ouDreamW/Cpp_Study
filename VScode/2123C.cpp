#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
1.选择前缀，用前缀的最小值替换（一个换多个）
2.选择后缀，用后缀的最大值替换

前面没有比它小的或者后面没有比它大的

3 7 2 1 5
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), pre(n), suf(n);
  int min_v = INT_MAX, max_v = INT_MIN;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    min_v = min(min_v, a[i]);
    pre[i] = min_v;
  }
  for (int i = n - 1; i >= 0; i--) {
    max_v = max(max_v, a[i]);
    suf[i] = max_v;
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == pre[i] || a[i] == suf[i]) {
      cout << 1;
    } else {
      cout << 0;
    }
  }
  cout << endl;
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