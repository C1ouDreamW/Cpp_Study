#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (!a[i]) {
      cnt++;
      if (s[i] == '>') {
        a[i] = 1;
      } else if (s[i] == '<') {
        a[i] = -1;
      } else
        a[i] = a[i - 1];
      continue;
    }
    if (s[i] == '>') {
      if (a[i] < 0) {
        a[i] = -a[i];
        cnt++;
      }
    } else if (s[i] == '<') {
      if (a[i] > 0) {
        a[i] = -a[i];
        cnt++;
      }
    } else {
      if (a[i] * a[i - 1] < 0) {
        a[i] = -a[i];
        cnt++;
      }
    }
  }

  cout << cnt << endl;
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