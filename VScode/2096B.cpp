#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

struct node {
  int lc, rc;
  int sum;
};
bool cmp(node &A, node &B) {
  if (A.sum != B.sum)
    return A.sum < B.sum;
  else {
    return true;
  }
}
const int N = 1e6;
int n, k;
vector<node> a(N);

void solve() {
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i].lc;
  }
  cout << endl;
  cout << k << endl;
  for (int i = 1; i <= n; i++) {
    cin >> a[i].rc;
    a[i].sum = a[i].lc + a[i].rc;
  }
  sort(a.begin() + 1, a.begin() + n + 1, cmp);
  for (int i = 1; i <= n; i++) {
    cout << a[i].sum << " ";
  }
  cout << endl;
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