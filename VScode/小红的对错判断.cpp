#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string s;
  cin >> s;
  for (int i = 0; s[i]; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += abs('A' - 'a');
    }
  }
  if (s == "yes") {
    cout << "accept" << endl;
  } else {
    cout << "wrong answer" << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}