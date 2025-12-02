#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
排列
选择任意个整数使得其按位异或最大
同一位不同则为1，否则为0
0001 0010 0011 0100 0101

111
*/

void solve() {
  int n;
  cin >> n;
  int ans = 0;
  int base = 1;
  while (n) {
    ans += base;
    base *= 2;
    n >>= 1;
  }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}