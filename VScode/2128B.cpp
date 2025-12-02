#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
good -- 连续5个以上同时递增或递减

每回合移除左边和右边的元素，放入q数组中，最终使得q是good

因为“保证答案总是存在”
所以每次选择左或右必然有一个正确，使用dfs搜索
*/

vector<int> q;
string ans = "";

bool check(int x) {
  if (q.size() < 4) {
    return true;
  }

  vector<int> temp;
  for (int i = q.size() - 4; i < q.size(); i++) {
    temp.push_back(q[i]);
  }
  temp.push_back(x);

  bool f1 = true, f2 = true;
  for (int i = 0; i < 4; i++) {
    if (temp[i] >= temp[i + 1]) {
      f1 = false;
    }
    if (temp[i] <= temp[i + 1]) {
      f2 = false;
    }
  }

  if (!f1 && !f2) {
    return true;
  } else {
    return false;
  }
}

bool dfs(vector<int> &a, int l, int r) {
  if (q.size() == a.size()) {
    return true;
  }

  // 选左
  if (check(a[l])) {
    q.push_back(a[l]);
    ans += 'L';
    if (dfs(a, l + 1, r)) {
      return true;
    }
    q.pop_back();
    ans.pop_back();
  }
  if (l < r) {
    if (check(a[r])) {
      q.push_back(a[r]);
      ans += 'R';
      if (dfs(a, l, r - 1)) {
        return true;
      }
      q.pop_back();
      ans.pop_back();
    }
  }
  return false;
}

void solve() {
  q.clear();
  ans = "";
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  dfs(a, 0, n - 1);

  cout << ans << endl;
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