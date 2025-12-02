#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  char a, b;
  cin >> a >> b;
  if (a == b) {
    cout << 2 << endl;
    cout << a << endl;
    cout << a << a << endl;
  } else {
    cout << 4 << endl;
    cout << a << endl;
    cout << b << endl;
    cout << a << b << endl;
    cout << b << a << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();

  return 0;
}