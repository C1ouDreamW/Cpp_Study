#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
s[i] == 1的位置满足在长度至少为k的区间内，p[i]不是最大值

最大元素依次放在0的位置上
*/

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 0; s[i]; i++) {
    if (s[i] == '1') {
      cnt++;
      if (cnt >= k) {
        cout << "NO" << endl;
        return;
      }
    } else {
      cnt = 0;
    }
  }
  cout << "YES" << endl;
  vector<int> ans(n);
  int cnt_1 = 1, cnt_0 = n;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      ans[i] = cnt_1++;
    } else
      ans[i] = cnt_0--;
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
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