#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

struct node {
  int s, b;
};

int n;
vector<node> a(11);
vector<bool> v(11, false);
int ss = 1, bb = 0;
int minmin = 1e9;

void dfs(int u, int cnt) {
  if (u == cnt) {
    minmin = min(minmin, abs(ss - bb));
    return;
  }

  for (int i = 0; i < n; i++) {
    if (!v[i]) {
      int temp_s = ss, temp_b = bb;
      v[i] = true;
      ss *= a[i].s;
      bb += a[i].b;
      dfs(u + 1, cnt);
      v[i] = false;
      ss = temp_s;
      bb = temp_b;
    }
  }
}

void solve() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].s >> a[i].b;
  }
  int min_c = 1e9;
  for (int i = 1; i <= n; i++) {
    ss = 1, bb = 0;
    minmin = 1e9;
    dfs(0, i);
    min_c = min(min_c, minmin);
  }

  cout << min_c << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}