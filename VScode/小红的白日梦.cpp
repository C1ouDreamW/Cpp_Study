#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  string s1, s2;
  cin >> s1 >> s2;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (s1[i] == 'N' && s2[i] == 'Y') {
      sum += 2;
    } else if (s1[i] == 'Y' && s2[i] == 'Y') {
      sum += 3;
    } else if (s1[i] == 'Y') {
      sum += 2;
    } else if (s2[i] == 'Y') {
      sum += 1;
    }
  }
  cout << sum << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}