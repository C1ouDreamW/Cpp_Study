#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
k次交易的情况下，买到n个西瓜

27 + 2*9 = 27+18=45 --> 9 --> 5

3 + 0 == 3 --> 1
9 + 1*1 = 10 --> 3

x :17 --> n = 1119214746 > 1e9

x最大为17
尽量用小的x进行交易

先算出最小交易次数的情况 --> 依次拓展到更小的x上

cost:
3 10 33 108 351 1134 3645 11664 37179 118098 373977 1180980 3720087 11691702
36669429 114791256 358722675 1119214746

10 --> 3 -- 3 3 3  = 9

从最大的x开始往下一层一层分，直到分到k次

每一次分都会使min_v += 2
*/

int cal(int x) { return (int)powl(3, x + 1) + (int)x * (int)powl(3, x - 1); }

void solve() {
  vector<PII> temp(20);
  for (int i = 0; i <= 19; i++) {
    temp[i].first = powl(3, i);
    temp[i].second = cal(i);
  }
  int n, k;
  cin >> n >> k;

  int min_v = 0, idx = 19;
  int nn = n;
  vector<int> cnts(20, 0);
  int max_idx = INT_MIN;

  for (int i = 19; i >= 0; i--) {
    if (nn >= temp[i].first) {
      max_idx = max(max_idx, i);
      cnts[i] = nn / temp[i].first;
      min_v += cnts[i];
      nn %= temp[i].first;
    }
  }

  if (k < min_v) {
    cout << -1 << endl;
    return;
  }

  if ((k - min_v) % 2 != 0) {
    k--;
  }
  int div = (k - min_v) / 2;
  if (div == 0) {
    int ans = 0;
    for (int i = 0; i <= max_idx; i++) {
      ans += cnts[i] * temp[i].second;
    }
    cout << ans << endl;
    return;
  }

  for (int i = max_idx; i > 0; i--) {
    if (div == 0) {
      break;
    }
    int now = min(div, cnts[i]);
    if (now > 0) {
      cnts[i] -= now;
      cnts[i - 1] += now * 3;
      div -= now;
    }
  }

  int ans = 0;
  for (int i = 0; i < 20; i++) {
    ans += cnts[i] * temp[i].second;
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