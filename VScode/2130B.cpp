#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
0 1 2

1.sum == s --> -1
2.sum > s --> 不变

3.sum < s
  sum + x == s
  x 为某个区间内和的二倍
  x == s - sum
  任意一个区间内和的二倍都不等于x才能阻止爱丽丝

  MAX_N = 50

2^50

3 8
0 1 2 3

3 10
0 1 2

-1

1.若存在 01 / 10结构，则Alice赢
2.若存在 02 / 20结构，则x % 2==0时Alice赢

构造数组不存在上述结构
x % 2 == 0 -- 1 & 2
x % 2 != 0 -- 1

3 10
0 2 1
*/

void solve() {
  int n, s;
  cin >> n >> s;
  vector<int> a(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  if (sum == s) {
    cout << -1 << endl;
    return;
  } else if (sum > s) {
    for (int i = 0; i < n; i++)
      cout << a[i] << " ";
    cout << endl;
    return;
  }
  int x = s - sum;

  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    mp[a[i]]++;
  }

  if (x == 1) {
    for (int i = 0; i < mp[0]; i++) {
      cout << 0 << " ";
    }
    for (int i = 0; i < mp[2]; i++) {
      cout << 2 << " ";
    }
    for (int i = 0; i < mp[1]; i++) {
      cout << 1 << " ";
    }
    cout << endl;
    return;
  } else {
    cout << -1 << endl;
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