#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, k, a, b;
  cin >> n >> k >> a >> b;
  int sp1 = (n - 1) * a;
  int sp2 = (n - 1 + k - 1) * b;
  if (sp1 > sp2)
    cout << 1 << endl;
  else if (sp1 < sp2)
    cout << 2 << endl;
  else
    cout << 0 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}