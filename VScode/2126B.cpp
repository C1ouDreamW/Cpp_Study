#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
1 -- 下雨
0 -- 晴天

休息一天

O(n) <= n * n

贪心加暴力
每出现一个可以登顶的时间段就选择登顶
遍历n天
*/

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  int i = 1;
  while (i <= n) {
    int cnt = 0;
    int j = i;
    while (j <= n) {
      if (a[j]) {
        i = j + 1;
        break;
      } else {
        cnt++;
        if (cnt == k) {
          ans++;
          i = j + 2;
          break;
        }
      }
      j++;
    }
    if (j > n) {
      break;
    }
  }

  cout << ans << endl;
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