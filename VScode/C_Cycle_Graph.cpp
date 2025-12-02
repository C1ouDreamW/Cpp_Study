#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 200010;
int fa[N];

int find(int x) {
  if (fa[x] != x) {
    fa[x] = find(fa[x]);
  }
  return fa[x];
}

void unite(int x, int y) {
  int f1 = find(x);
  int f2 = find(y);
  if (f1 != f2) {
    fa[f1] = f2;
  }
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> mp(n + 1);
  for (int i = 1; i <= n; i++) {
    fa[i] = i;
  }
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    mp[a]++, mp[b]++;
    unite(a, b);
  }
  if (n != m) {
    cout << "No" << endl;
    return;
  }
  for (int i = 1; i <= n; i++) {
    if (mp[i] != 2) {
      cout << "No" << endl;
      return;
    }
  }
  int cnt_r = 0;
  for (int i = 1; i <= n; i++) {
    if (find(i) == i) {
      cnt_r++;
    }
  }
  if (cnt_r >= 2) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}