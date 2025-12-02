#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
4 3 3 2 1
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end(), greater<int>());
  int cnt = 0;
  int l = 0, r = n - 1;
  for (int l = 0; l <= r; l++) {
    if (l == r) {
      cnt++;
      break;
    }
    if (a[l] == 4) {
      cnt++;
      continue;
    } else if (a[l] == 3) {
      if (a[r] == 1) {
        cnt++;
        r--;
        continue;
      } else {
        cnt++;
        continue;
      }
    } else if (a[l] == 2) {
      if (a[r] == 2) {
        cnt++;
        r--;
      } else if (a[r] == 1) {
        cnt++;
        r--;
        if (a[r] == 1) {
          r--;
        }
      } else {
        cnt++;
        continue;
      }
    } else if (a[l] == 1) {
      cnt += ceil((r - l + 1) / 4.0);
      break;
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