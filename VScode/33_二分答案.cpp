#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int n, k;

bool check(int x, vector<int> &a) {
  int c = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] >= x) {
      break;
    } else {
      c += x - a[i];
      if (c > k) {
        return false;
        break;
      }
    }
  }
  if (c > k) {
    return false;
  } else {
    return true;
  }
}

void solve() {
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  // for (int i = 0; i < n; i++) {
  //   cout << a[i] << " ";
  // }
  // cout << endl;

  int l = 1, r = 1e18 + 7;
  while (l < r) {
    int mid = (l + r + 1) >> 1;
    if (check(mid, a)) {
      l = mid;
    } else {
      r = mid - 1;
    }
  }
  cout << l << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}