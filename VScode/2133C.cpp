#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
返回最长路径

从第i个点出发的最长路径长度 len
遍历询问n个点，找到最大len的点作为 起点

返回从i出发的最长长度
找到一个最长的出发点

剩余n次查询

确定除从起点开始其余的n-1个点：

有向无环图
单向链接

1.下一个点的最长路径一定是上一个点最长减一
lens[next] == lens[bef]-1

lens[st] --> lens[a] --> lens[b] .. --> lens[ed] =

2.下一个点一定与上一个点有链接

遍历条件1成立的点，查询上一个点是否与此点有链接若有则选定

重复查询

*/

void solve() {
  int n;
  cin >> n;
  vector<int> lens(n + 1), ans;
  int max_v = 0, st = 0;
  for (int i = 1; i <= n; i++) {
    cout << "? " << i << " " << n << " ";
    for (int j = 1; j <= n; j++)
      cout << j << " ";
    cout << endl;
    cin >> lens[i];
    if (lens[i] > max_v) {
      st = i;
      max_v = lens[i];
    }
    fflush(stdout);
  }

  ans.push_back(st);
  int now = st, bef_len = max_v;
  while (ans.size() < max_v) {
    vector<int> next;
    for (int i = 1; i <= n; i++) {
      if (lens[i] == bef_len - 1) {
        next.push_back(i);
      }
    }
    for (int i = 0; i < next.size(); i++) {
      cout << "? " << now << " 2 " << now << " " << next[i] << endl;
      int x;
      cin >> x;
      fflush(stdout);
      if (x == 2) {
        ans.push_back(next[i]);
        now = next[i];
        bef_len = lens[next[i]];
        break;
      }
    }
  }
  cout << "! " << ans.size() << " ";
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
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