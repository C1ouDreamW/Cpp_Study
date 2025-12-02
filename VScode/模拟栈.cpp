#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int m;
  cin >> m;
  vector<int> a(100010);
  int idx = 0;
  while (m--) {
    string s;
    cin >> s;
    if (s == "push") {
      int x;
      cin >> x;
      a[++idx] = x;

    } else if (s == "pop") {
      if (idx) {
        idx--;
      }
    } else if (s == "empty") {
      if (!idx) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else if (s == "query") {
      if (idx) {
        cout << a[idx] << endl;
      } else {
        cout << "empty" << endl;
      }
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