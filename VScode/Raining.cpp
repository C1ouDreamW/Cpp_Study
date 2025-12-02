#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int a, b, c, d, x;
  cin >> a >> b >> c >> d >> x;
  a -= x, b -= x, c -= x, d -= x;
  if (a >= 0)
    cout << 0 << " ";
  else
    cout << -a << " ";
  if (b >= 0)
    cout << 0 << " ";
  else
    cout << -b << " ";
  if (c >= 0)
    cout << 0 << " ";
  else
    cout << -c << " ";
  if (d >= 0)
    cout << 0 << endl;
  else
    cout << -d << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}