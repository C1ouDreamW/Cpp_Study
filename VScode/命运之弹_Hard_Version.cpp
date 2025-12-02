#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int MAX_N = 100010;
const int MAX_V = 110;

int a[MAX_N];
int suf[MAX_N][MAX_V];

void solve() {
  int n, q;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> q;

  for (int i = n - 1; i >= 0; i--) {
    if (i < n - 1) {
      for (int j = 0; j < MAX_V; j++) {
        suf[i][j] = suf[i + 1][j];
      }
    }
    for (int j = 0; j < MAX_V; j++) {
      if (j < a[i]) {
        suf[i][j]++;
      }
    }
  }

  while (q--) {
    int v;
    cin >> v;
    int cnt_0 = 0;
    for (int i = 0; i < n; i++) {
      if (v < a[i]) {
        cnt_0++;
      }
    }
    int ans = cnt_0;
    for (int i = 0; i < n; i++) {
      int cnt = 0;
      int now = a[i];
      for (int j = 0; j < i; j++) {
        if (v < a[j]) {
          cnt++;
        }
      }
      if (i < n - 1) {
        cnt += suf[i + 1][now];
      }
      ans = min(ans, cnt);
    }
    cout << ans << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}