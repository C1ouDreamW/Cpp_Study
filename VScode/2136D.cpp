#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
不超过10步

选择一个方向，筛选同方向最远的一个锚点，跑到此方向无限远处，
返回与这个锚点曼哈顿距离

假设向上到无限远，
选定锚点坐标（x,y）
移动后(c,d) -- d无穷大
|x-c|+|y-d| --> y<d -- y-d<0 --> |x-c|+d-y = ret
|x-c| = ret-d
1.x>c --  c = x+d-y-ret
2.x<c --  c = ret-d-x+y
c是初始x坐标值

向右上方无限远，c和d无穷大
|x-c|+|y-d| --> c-x+d-y --> c+d = ret+x+y

设原坐标（a,b）
a+b+2*k = ret+x+y
a+b = ret+x+y-2*k

向左下方无限远，c和d无穷小
|x-c|+|y-d| --> x+y-c-d = ret --> c+d = x+y-ret
a+b = x+y-ret-2*k

向左上方
|x-c|+|y-d| --> x-c+d-y = ret --> c-d = x-y-ret
a-b = x-y-ret-2*k

先到左上，再到右上
左上右右 四次
*/

void solve() {
  int n;
  cin >> n;
  vector<PII> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
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