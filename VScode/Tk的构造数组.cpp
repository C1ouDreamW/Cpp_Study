#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

struct node {
  int val, idx;
};

bool cmp(node &A, node &B) { return A.val >= B.val; }

int n;
void solve() {
  cin >> n;
  vector<node> a(n + 1);
  vector<int> b(n + 1), ans(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i].val;
    a[i].idx = i;
    a[i].val *= i;
  }
  for (int i = 1; i <= n; i++) {
    cin >> b[i];
  }
  sort(a.begin() + 1, a.end(), cmp);
  sort(b.begin() + 1, b.end(), greater<int>());
  for (int i = 1; i <= n; i++) {
    ans[a[i].idx] = b[i];
  }
  for (int i = 1; i <= n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}