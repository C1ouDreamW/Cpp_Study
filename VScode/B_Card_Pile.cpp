#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int q;
  cin >> q;
  deque<int> a;
  for (int i = 0; i < 100; i++) {
    a.push_back(0);
  }
  for (int i = 0; i < q; i++) {
    int c;
    cin >> c;
    if (c == 1) {
      int x;
      cin >> x;
      a.push_front(x);
    } else {
      cout << a.front() << endl;
      a.pop_front();
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