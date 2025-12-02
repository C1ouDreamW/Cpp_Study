#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
找到字典序最小的数组a
a[i] = [l,r]

按位与和 == 按位异或和
若同一位中有0，则必须为偶数个1或全是0
若同一位中没有0，则必须为奇数个1 -- n为奇数

0001 -- 0001
按位与 -- 同一位中有一个0则为0
按位异或 -- 若有奇数个1则为1，偶数个1则为0（0个1也行）

输出a[k]

4 6 9 3
0110 0111 1000 1001

···10
···11

···11
···00

0100

0 1 0 1 1
*/

int cal(int x) {
  int res = 1;
  while (x) {
    x >>= 1;
    res <<= 1;
  }
  return res;
}

void solve() {
  int n, l, r, k;
  cin >> n >> l >> r >> k;
  if (n % 2 != 0) {
    cout << l << endl;
    return;
  } else {
    int t = cal(l);
    if (r >= t && n >= 4) {
      if (k >= n - 1) {
        cout << t << endl;
      } else {
        cout << l << endl;
      }
    } else {
      cout << -1 << endl;
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