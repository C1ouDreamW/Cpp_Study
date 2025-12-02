#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
如果剩余数的异或和不为0，则从数列中删除最左边或最右边的一个数
a1^a2^a3...^an-1^an == 0
每位中1的数量为偶数
如果到谁的时候不能删除，则输掉比赛

T局游戏，:从"I"开始

001
010
011
100

1.1-n的异或和为0的情况（P赢）：%4==3，%8==2，%32==30,%64==61
3 7 11 15 19 23 27

2.四的倍数，I赢

3. %4==1，I赢

4.其他情况，P赢
*/

void solve() {
  int n;
  cin >> n;
  // int xsum = 0;
  // for (int i = 1; i <= n; i++) {
  //   xsum ^= i;
  // }
  // cout << xsum << "  ";
  bool iwin = false;
  int x = n % 4;
  if (x == 3) {
    iwin = false;
  } else if (x == 1) {
    iwin = true;
  } else if (x == 0) {
    iwin = true;
  } else {
    iwin = false;
  }
  if (iwin) {
    cout << "Fluttershy" << endl;
  } else {
    cout << "Pinkie Pie" << endl;
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