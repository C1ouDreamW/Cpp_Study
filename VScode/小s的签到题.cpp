#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, char>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

bool cmp(PII &A, PII &B) {
  if (A.first != B.first)
    return A.first > B.first;
  else {
    return A.second < B.second;
  }
}

void solve() {
  int n;
  cin >> n;
  vector<PII> a(n);
  char c;
  for (int i = 0; i < n; i++) {
    cin >> c;
    a[i].second = c;
  }
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> c >> y;
    a[i].first = x;
  }
  sort(a.begin(), a.end(), cmp);
  cout << a[0].second << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}