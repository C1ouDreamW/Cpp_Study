#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

bool isGood(int x) {
  int idx = 1;
  string s = to_string(x);
  for (int i = s.size() - 1; i >= 0; i--, idx++) {
    int x = s[i] - '0';
    if (idx % 2 == 0) {
      if (x % 2 != 0) {
        return false;
      }
    } else {
      if (x % 2 == 0) {
        return false;
      }
    }
  }

  return true;
}

void solve() {
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (isGood(i)) {
      cnt++;
    }
  }

  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}