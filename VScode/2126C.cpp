#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
st - nw --> 可逃生时间
查找可逃生时间内可到达的最高楼层
二分查找   h[1]-st <= st-nw   --->  h[1] <=2*st-nw
1.若找到，则 nw += h[1]-st , st = h[1]
2.未找到，失败

思路正确
贪心+二分，每个状态找最优解
wa2原因：二分逻辑错误、右端点设置错误(n-1)
*/

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  int max_val = 0;
  for (int i = 0; i < n; i++) {
    cin >> h[i];
    max_val = max(max_val, h[i]);
  }
  int st = h[k - 1];
  int nw = 0;
  if (st == max_val) {
    cout << "YES" << endl;
    return;
  }
  sort(h.begin(), h.end());

  while (true) {
    int l = 0, r = n - 1;
    int the_max = -1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (h[mid] <= 2 * st - nw) {
        the_max = mid;
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    if (the_max != -1 && h[the_max] > st) {
      nw += h[the_max] - st;
      st = h[the_max];
    } else {
      cout << "NO" << endl;
      return;
    }
    if (st == max_val) {
      cout << "YES" << endl;
      return;
    }
  }
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