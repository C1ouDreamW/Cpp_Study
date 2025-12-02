#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
S --> T

s[i]:
1. += k
2. |x - k|
变完后
1.和原数对k同余
2.余数 == k- x%k
6 5
11 16 21 1 6
11 % 5 = 1
6 % 5 = 1

4 5
-1 1
4

对比两个数列的余数特征
*/

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> s(n), t(n);
  for (int i = 0; i < n; i++)
    cin >> s[i];
  for (int i = 0; i < n; i++)
    cin >> t[i];
  vector<PII> ys(n), yt(n);

  for (int i = 0; i < n; i++) {
    ys[i].first = s[i] % k;
    ys[i].second = k - (s[i] % k);
    if (ys[i].first > ys[i].second)
      swap(ys[i].first, ys[i].second);
  }
  for (int i = 0; i < n; i++) {
    yt[i].first = t[i] % k;
    yt[i].second = k - (t[i] % k);
    if (yt[i].first > yt[i].second)
      swap(yt[i].first, yt[i].second);
  }
  sort(ys.begin(), ys.end());
  sort(yt.begin(), yt.end());

  for (int i = 0; i < n; i++) {
    if (ys[i].first == yt[i].first || ys[i].second == yt[i].second) {

    } else {
      cout << "NO" << endl;
      return;
    }
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