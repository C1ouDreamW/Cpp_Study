#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int c, l;
  cin >> c >> l;
  vector<PII> a(c), b(l);
  for (int i = 0; i < c; i++) {
    cin >> a[i].first >> a[i].second;
  }
  for (int i = 0; i < l; i++) {
    cin >> b[i].first >> b[i].second;
  }
  sort(a.begin(), a.end(), greater<PII>());
  sort(b.begin(), b.end(), greater<PII>());
  int ans = 0;
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < l; j++) {
      if (b[j].second) {
        if (b[j].first >= a[i].first && b[j].first <= a[i].second) {
          ans++;
          b[j].second--;
          break;
        }
      }
    }
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