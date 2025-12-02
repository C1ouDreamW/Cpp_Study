#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
操作：将任意堆顶元素移动到任何位置

一定存在一种操作，转移后
顶部由c[i]个0组成、底部由d[i]个1组成

对于一个堆，
因为每次都可任意移动，所以所有操作均默认为最佳操作
a>c --> 直接移动a-c个即可
b>d --> 必须先把a全部移走，再移b-d个1  即移动a+(b-d)个

如果b>d则不用管a和c的关系

*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n), d(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }
  int cnt = 0;

  for (int i = 0; i < n; i++) {
    if (b[i] > d[i]) {
      cnt += a[i] + (b[i] - d[i]);
    } else {
      if (a[i] - c[i] > 0) {
        cnt += a[i] - c[i];
      }
    }
  }
  cout << cnt << endl;
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