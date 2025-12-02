#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string x;
  cin >> x;
  if (x.size() != 2) {
    cout << "No" << endl;
  } else {
    if (x[0] == x[1]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}