#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
每次只能移动a[i]的欧几里得距离

pow(a[i],2) == pow((x1-x2),2)+pow((y1-y2),2)

最远端取决于总长度

最近端取决于是否尾端能与定点重合 --> 能否组成封闭图形
*/

void solve() {
  int n, px, py, qx, qy;
  cin >> n >> px >> py >> qx >> qy;
  vector<int> a(n);
  int sum = 0;
  int max_v = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    max_v = max(max_v, a[i]);
  }
  double dis = sqrt((px - qx) * (px - qx) + (py - qy) * (py - qy));
  int s, l;
  l = sum;

  if (n == 1) {
    s = a[0];
  } else if (n == 2) {
    s = abs(a[0] - a[1]);
  } else {
    if (max_v <= sum - max_v) {
      s = 0;
    } else {
      s = max_v - (sum - max_v);
    }
  }

  if (dis >= s && dis <= l) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
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