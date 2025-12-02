#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string s;
  cin >> s;
  int ans = 1;
  int n = s.size();
  vector<int> hash(10000);
  int l = 0, r = 0;
  bool flag = false;
  char doub;
  hash[s[l] - '0']++;
  while (l < n && r < n - 1) {
    if (flag) { // 存在重复元素
      hash[s[l] - '0']--;
      if (s[l] == doub) {
        flag = false;
        l++;
      } else {
        l++;
      }
    } else { // 之前不存在重复元素
      r++;
      hash[s[r] - '0']++;
      if (hash[s[r] - '0'] >= 2) {
        flag = true;
        doub = s[r];
      } else {
        ans = max(ans, r - l + 1);
      }
    }
  }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}