#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
a[i] -- [0,n]

进行最多一次操作： a[i] += a[j],a[j] = 0 , i<j

s = 前缀最小值和
输出min(s)


与>j的元素无关
小于i的元素正常计算前缀min
[i,j]的元素

a[0]>=a[1] --> min = a[0]+a[1],后面全为0
a[0]<a[1]  --> min = a[0]*2,2后面全为0
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.emplace_back(x);
  }
  if (!a[0]) {
    cout << 0 << endl;
    return;
  } else if (!a[1]) {
    cout << a[0] << endl;
    return;
  } else {
    if (a[0] >= a[1])
      cout << a[0] + a[1] << endl;
    else
      cout << a[0] * 2 << endl;
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