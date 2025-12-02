#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  vector<int> b(n + 1), c(n + 1);
  map<int, int> mp1, mp2;

  if (n == 2) {
    cout << 2 << endl;
    return;
  }

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (!mp1[a[i]]) {
      mp1[a[i]]++;
      cnt++;
    }
    b[i] = cnt;
  }
  cnt = 0;
  for (int i = n; i > 0; i--) {
    if (!mp2[a[i]]) {
      mp2[a[i]]++;
      cnt++;
    }
    c[i] = cnt;
  }
  int max_sum = 0;

  // for (int i = 1; i <= n; i++) {
  //   cout << b[i] << " ";
  // }
  // cout << endl;
  // for (int i = 1; i <= n; i++) {
  //   cout << c[i] << " ";
  // }
  // cout << endl;

  for (int i = 1; i <= n - 1; i++) {
    int j = i + 1;
    max_sum = max(max_sum, b[i] + c[j]);
  }

  cout << max_sum << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}