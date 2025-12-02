#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long

// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
一个排列p的价值是 max(lis(p),lds(p))
lis(p) -- 最长递增子序列的长度
lds(p) -- 最长递减子序列的长度
对于所有方式的n的排列，找出价值最小的那种排列方式

5
1 3 5 4 2 -- lis(p) = 3,lds(p) = 3.
*/

int n;
const int N = 110;
bool flag[N];
int ans[N];
int min_p = INT_MAX;
int f[N];
vector<int> temp;

void dfs(int u) {
  if (u == n + 1) {
    int len_1 = 0, len_2 = 0;
    for (int i = 1; i <= n; i++) {
      f[i] = 1;
    }
    for (int i = 1; i <= n; i++)
      for (int j = 1; j < i; j++)
        if (temp[j] < temp[i])
          f[i] = max(f[i], f[j] + 1);
    for (int i = 1; i <= n; i++) {
      len_1 = max(len_1, f[i]);
    }
    reverse(temp.begin(), temp.end());
    for (int i = 1; i <= n; i++) {
      f[i] = 1;
    }
    for (int i = 1; i <= n; i++)
      for (int j = 1; j < i; j++)
        if (temp[j] < temp[i])
          f[i] = max(f[i], f[j] + 1);
    for (int i = 1; i <= n; i++) {
      len_2 = max(len_2, f[i]);
    }

    reverse(temp.begin(), temp.end());
    if (max(len_1, len_2) < min_p) {
      for (int i = 1; i <= n; i++) {
        ans[i] = temp[i];
      }
      min_p = max(len_1, len_2);
    }
    return;
  }

  for (int i = 1; i <= n; i++) {
    if (!flag[i]) {
      flag[i] = true;
      temp.push_back(i);
      dfs(u + 1);
      temp.pop_back();
      flag[i] = false;
    }
  }
}

void solve() {
  cin >> n;
  temp.clear();
  temp.push_back(0);
  min_p = INT_MAX;
  memset(flag, 0, sizeof(flag));
  dfs(1);
  cout << endl << min_p << endl;
  for (int i = 1; i <= n; i++) {
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