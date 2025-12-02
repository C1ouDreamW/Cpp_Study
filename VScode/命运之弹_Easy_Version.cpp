#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long

const int MAX_N = 200010;

int a[MAX_N];
int pre[MAX_N], suf[MAX_N], bigs[MAX_N];

void solve() {
  int n, q, v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> q >> v;

  if (v < a[0]) {
    pre[0] = 1;
  }
  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1];
    if (v < a[i]) {
      pre[i]++;
    }
  }
  suf[n - 1] = 0;
  for (int i = n - 2; i >= 0; i--) {
    suf[i] = suf[i + 1];
    if (v < a[i + 1]) {
      suf[i]++;
    }
  }
  bigs[n - 1] = 0;
  for (int i = n - 2; i >= 0; i--) {
    bigs[i] = bigs[i + 1];
    if (a[i + 1] > a[i]) {
      bigs[i]++;
    }
  }

  int ans = pre[n - 1];
  for (int i = 0; i < n; i++) {
    int cnt;
    if (i > 0) {
      cnt = pre[i - 1];
    } else {
      cnt = 0;
    }
    cnt += bigs[i];
    ans = min(ans, cnt);
  }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}