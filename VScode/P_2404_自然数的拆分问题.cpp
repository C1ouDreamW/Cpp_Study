#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int n;
vector<vector<int>> ans;
vector<int> temp;

void dfs(int num, int www) {
  if (num == 0) {
    sort(temp.begin(), temp.end());
    ans.push_back(temp);
    return;
  }

  for (int i = www; i <= num; i++) {
    temp.push_back(i);
    dfs(num - i, i);
    temp.pop_back();
  }
}

void solve() {
  cin >> n;
  dfs(n, 1);
  ans.pop_back();
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      if (j != ans[i].size() - 1) {
        cout << ans[i][j] << '+';
      } else {
        cout << ans[i][j];
      }
    }
    cout << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}