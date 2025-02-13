#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  bool flag = true;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] >= 0) {
      flag = false;
    }
  }

  if (flag) {
    int max_sum = -10000;
    for (int i = 0; i < n; i++) {
      max_sum = max(max_sum, a[i]);
    }
    cout << max_sum << endl;
    return;
  }
  int sum = 0;
  int max_sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
    max_sum = max(max_sum, sum);
    if (sum < 0) {
      sum = 0;
    }
  }

  cout << max_sum << endl;
}

signed main() {
  solve();
  return 0;
}