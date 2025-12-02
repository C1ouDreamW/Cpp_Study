#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> b(n), w(m);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> w[i];
  }
  sort(b.begin(), b.end(), greater<int>());
  sort(w.begin(), w.end(), greater<int>());

  int sum = 0;
  bool can_w = true;
  for (int i = 0; i < n; i++) {
    if (i < m) {
      if (w[i] <= 0) {
        can_w = false;
      }
      if (can_w) {
        if (b[i] + w[i] > 0) {
          sum += b[i] + w[i];
        } else {
          break;
        }
      } else {
        if (b[i] > 0) {
          sum += b[i];
        } else {
          break;
        }
      }

    } else {
      if (b[i] > 0) {
        sum += b[i];
      } else {
        break;
      }
    }
  }

  if (sum < 0) {
    cout << 0 << endl;
  } else {
    cout << sum << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}