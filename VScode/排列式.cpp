#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  vector<PII> a;
  for (int i = 1; i < 10000; i++) {
    for (int j = i + 1; j < 10000; j++) {
      vector<int> f(10);
      string s1 = to_string(i), s2 = to_string(j), s3 = to_string(i * j);
      for (int k = 0; s1[k]; k++)
        f[s1[k] - '0']++;
      for (int k = 0; s2[k]; k++)
        f[s2[k] - '0']++;
      for (int k = 0; s3[k]; k++)
        f[s3[k] - '0']++;
      for (int i = 1; i <= 9; i++) {
        if (f[i] != 1) {
          continue;
        }
      }
      a.push_back({i, j});
      cout << i << " " << j << endl;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}