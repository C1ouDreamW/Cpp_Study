#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
缩小直径（任意一对顶点之间的最长距离）
操作：
选择一段简单路径s->t
删除其连接所有边
直接将其余点链接到s
即：可以将s->t的点都连接到s上

半径最小值恒为2，即有n-1个点连接到同一个点

最小次数将树转换

最终汇聚点为原始树上分支最多的点， --> 度数最大的点
从这点出发，递归求分支次数
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    a[u]++, a[v]++;
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
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