#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
最长整齐子序列

dp[i] -- 前i个元素中最长整齐子序列长度

1.选择第i个元素：
如果能够与前残缺块凑成块，则
dp[i] = dp[i-1]+新块长度

若想要选择第i个元素，则必须在i之前找到a[i]-1个相同数,
设找到的a[i]块的头部为a[j]，
则dp[i] = dp[j]+a[i]

2.不选：
dp[i] = dp[i-1]

1<= a[i] <=n
*/

int serch(int x, int i, vector<vector<int>> &idxs) {
  if (idxs[x].size() < x) {
    return -1;
  }
  auto it = lower_bound(idxs[x].begin(), idxs[x].end(), i);
  int k = distance(idxs[x].begin(), it);
  if (k < x - 1) {
    return -1;
  }
  return idxs[x][k - x + 1];
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<vector<int>> idxs(n + 10, vector<int>());
  vector<int> dp(n + 10);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    idxs[a[i]].push_back(i);
  }

  for (int i = 0; i < n; i++) {
    dp[i + 1] = dp[i];
    int idx = serch(a[i], i, idxs);
    if (idx != -1) {
      dp[i + 1] = max(dp[i + 1], dp[idx] + a[i]);
    }
  }

  cout << dp[n] << endl;
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