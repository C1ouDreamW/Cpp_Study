#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
若无中心点，则为后手必胜
*/

void solve() {
  int n, m;
  cin >> n >> m;
  if (n % 2 == 1 && m % 2 == 1) {
    cout << "akai" << endl;
  } else {
    cout << "yukari" << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}