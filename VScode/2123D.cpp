#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
设一开始1的数量为x
1.k>=x --> Alice
2.k<x
任意选定一个k区间，若区间外有1，则Bob赢
当k超过n的一半时，Alice就可以控制至少k的区间全是0

1011011
0001000
1111000

8 3
10110110
*/

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int cnt_1 = count(s.begin(), s.end(), '1');
  if (k >= cnt_1) {
    cout << "Alice" << endl;
    return;
  }
  if (k > n / 2) {
    cout << "Alice" << endl;
  } else
    cout << "Bob" << endl;
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