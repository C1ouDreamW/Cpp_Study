#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
如果一个正整数的两个质因数都至少包含两位数，则是good
质数的质因式就是它本身

一位的质数只有 2 3 5 7
所以统计质因数为 2 3 5 7的数，总数减去这些数即可

ans += n/2 + n/3 + n/5 + n/7
ans -= n/6 - n/10 - n/14 - n/15 - n/21 - n/35
ans
*/

int ans = 0;

int cal(int n) {
  int res = 0;
  if (!n)
    return 0;
  res += n / 2;
  res += n / 3;
  res += n / 5;
  res += n / 7;

  res -= n / 6;
  res -= n / 10;
  res -= n / 14;
  res -= n / 15;
  res -= n / 21;
  res -= n / 35;

  res += n / 30;
  res += n / 42;
  res += n / 70;
  res += n / 105;

  res -= n / 210;
  return n - res;
}

void solve() {
  int l, r;
  cin >> l >> r;
  cout << cal(r) - cal(l - 1) << endl;
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