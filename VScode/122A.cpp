#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

bool isLucky(int n) {
  while (n) {
    if (n % 10 == 4 || n % 10 == 7) {
      n /= 10;
      continue;
    } else {
      return false;
    }
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  if (isLucky(n)) {
    cout << "YES" << endl;
    return;
  }
  for (int i = 1; i <= 1000; i++) {
    if (isLucky(i)) {
      if (n % i == 0) {
        cout << "YES" << endl;
        return;
      }
    }
  }
  cout << "NO" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}