#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

// 0 0 0 1 2 2 3 5
void solve() {
  int cnt = 0;
  int n;
  cin >> n;
  int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0, cnt_3 = 0, cnt_5 = 0;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    int x = a[i];
    if (x == 0) {
      cnt_0++;
    } else if (x == 1) {
      cnt_1++;
    } else if (x == 2) {
      cnt_2++;
    } else if (x == 3) {
      cnt_3++;
    } else if (x == 5) {
      cnt_5++;
    }
    cnt++;
    if (cnt_0 >= 3 && cnt_1 >= 1 && cnt_2 >= 2 && cnt_3 >= 1 && cnt_5 >= 1) {
      cout << cnt << endl;
      return;
    }
  }

  cout << 0 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}