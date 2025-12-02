#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  queue<int> q;
  int Q;
  cin >> Q;
  while (Q--) {
    int c;
    cin >> c;
    if (c == 1) {
      int x;
      cin >> x;
      q.push(x);
    } else if (c == 2) {
      int x = q.front();
      q.pop();
      cout << x << endl;
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