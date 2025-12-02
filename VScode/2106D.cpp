#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

struct node {
  int val, id;
};

bool cmp(node &A, node &B) {
  if (A.val != B.val)
    return A.val < B.val;
  else
    return A.id < B.id;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<node> a(n + 1);
  vector<int> b(m + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i].val;
    a[i].id = i;
  }
  for (int i = 1; i <= m; i++) {
    cin >> b[i];
  }
  sort(a.begin() + 1, a.end(), cmp);

  for (int i = 1; i <= n; i++) {
    int l = 1, r = n;
    while (l < r) {
      int mid = (l + r) >> 1;
    }
  }
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