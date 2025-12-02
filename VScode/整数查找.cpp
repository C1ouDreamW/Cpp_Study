#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  while (q--) {
    int ques, l, r, x;
    cin >> ques >> l >> r >> x;
    if (ques == 1) {
      int ll = l, rr = r;
      while (ll < rr) {
        int mid = (ll + rr) >> 1;
        if (a[mid] >= x) {
          rr = mid;
        } else {
          ll = mid + 1;
        }
      }
      if ((a[ll] != x) || ll < l || rr > r) {
        cout << -1 << endl;
      } else {
        cout << ll << endl;
      }
    } else if (ques == 2) {
      int ll = l, rr = r;
      while (ll < rr) {
        int mid = (ll + rr + 1) >> 1;
        if (a[mid] <= x) {
          ll = mid;
        } else {
          rr = mid - 1;
        }
      }
      if ((a[ll] != x) || ll < l || rr > r) {
        cout << -1 << endl;
      } else {
        cout << ll << endl;
      }

    } else if (ques == 3) {
      auto it = lower_bound(a.begin() + l, a.begin() + r + 1, x);
      if (it == a.begin() + r + 1 || it == a.end()) {
        cout << -1 << endl;
      } else {
        cout << distance(a.begin(), it) << endl;
      }
    } else if (ques == 4) {
      if (a[r] <= x) {
        cout << -1 << endl;
        continue;
      }
      auto it = lower_bound(a.begin() + l, a.begin() + r + 1, x + 1);
      if (it == a.begin() + r + 1 || it == a.end()) {
        cout << -1 << endl;
      } else {
        cout << distance(a.begin(), it) << endl;
      }
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