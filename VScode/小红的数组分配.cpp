#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  vector<int> a(n * 2), v1(n), v2(n);
  for (int i = 0; i < n * 2; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n * 2 - 1; i += 2) {
    if (a[i] == a[i + 1]) {
      v1[i / 2] = a[i];
      v2[i / 2] = a[i + 1];
    } else {
      cout << -1 << endl;
      return;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << v1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    cout << v2[i] << " ";
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