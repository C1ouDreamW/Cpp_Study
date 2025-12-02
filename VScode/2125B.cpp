#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
分解x y

设移动次数为x
在x方向上，找到k内可以被a整除的数，设为n
a%n == 0

在y方向上，找到k内可以被b整除的数，设为m
a%m == 0

a/n ~= b/m

若a/x和b/x <=k --> 只用一次
否则再最后调整一次 +1
*/

void solve() {
  int a, b, k;
  cin >> a >> b >> k;
  if (a > b) {
    swap(a, b);
  }

  int c = gcd(a, b);

  if (b / c <= k) {
    cout << 1 << endl;
  } else {
    cout << 2 << endl;
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