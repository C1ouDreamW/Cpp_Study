#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
vector<int> a;
vector<bool> flag(11);

void dfs(int m) {
  if (m == n) {
    for (auto i : a) {
      cout << "    " << i;
    }
    cout << endl;
    return;
  }

  for (int i = 1; i <= n; i++) {
    if (flag[i] == true)
      continue;
    flag[i] = true;
    a.push_back(i);
    dfs(m + 1);
    a.pop_back();
    flag[i] = false;
  }
}

void solve() {
  cin >> n;
  dfs(0);
}

signed main() {
  solve();
  return 0;
}