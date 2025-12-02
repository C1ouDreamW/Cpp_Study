#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

bool cmp(PII &a, PII &b) {
  if (a.second != b.second) {
    return a.second < b.second;
  } else {
    return a.first <= b.first;
  }
}

void solve() {
  int n, s;
  cin >> n >> s;
  vector<PII> vp(n);
  for (int i = 0; i < n; i++) {
    cin >> vp[i].first >> vp[i].second;
  }
  sort(vp.begin(), vp.end(), cmp);
  int cost = 0;
  int loc = -1;
  for (int i = vp.size() - 1; i >= 0; i--) {
    if (vp[i].first >= s) {
      loc = i;
      break;
    }
  }
  cost += vp[loc].second * s;
  for (int i = loc + 1)
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}