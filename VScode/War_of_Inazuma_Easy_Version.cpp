#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

bool cal(int x) {
  int cnt = 0;
  while (x) {
    if ((x & 1) == 1)
      cnt++;
    x >>= 1;
  }
  if (cnt % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < powl(2, n); i++) {
    if (cal(i)) {
      cout << 0;
    } else {
      cout << 1;
    }
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