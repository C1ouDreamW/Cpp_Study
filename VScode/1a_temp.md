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

void dfs(int num) {
  if (num == 1 ) {
    ans.push_back(temp);
    return;
  }

  for (int i = 1; i < num; i++) {
    temp.push_back(i);
    dfs(num - i);
    temp.pop_back();
  }
}

void solve() {
  cin >> n;
  dfs(n);

  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
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