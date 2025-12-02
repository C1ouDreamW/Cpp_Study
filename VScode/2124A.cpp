#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
c -- b按递增排序

b -- 4 5 5 2 4
id - 2 3 3 1 2
删除第二个5后：
b -- 4 5 2 4
id - 2 3 1 2

原数组递增 --> NO、
可以删无数次
直接删到只剩两个递减元素 顺序输出
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      cout << "YES" << endl << 2 << endl;
      cout << a[i] << " " << a[i + 1] << endl;
      return;
    }
  }
  cout << "NO" << endl;
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