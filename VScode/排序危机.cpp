#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string s1 = "", s2 = "", s3 = "";
  for (int i = 0; s[i]; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      s1 += s[i];
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      s2 += s[i];
    } else {
      s3 += s[i];
    }
  }
  cout << s1 << s3 << s2 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}