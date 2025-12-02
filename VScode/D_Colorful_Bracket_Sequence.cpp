#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string s;
  cin >> s;
  vector<bool> flag(s.size());

  bool ff = true;
  while (ff) {
    ff = false;
    for (int i = 0; i < s.size() - 1; i++) {
      if (!flag[i]) {
        for (int j = i + 1; j < s.size(); j++) {
          if (!flag[j]) {
            if ((s[i] == '(' && s[j] == ')') || (s[i] == '[' && s[j] == ']') ||
                (s[i] == '<' && s[j] == '>')) {
              ff = true;
              flag[i] = flag[j] = true;
              int l = i - 1, r = i + 2;
              while (l >= 0 && r < s.size()) {
                if ((s[i] == '(' && s[j] == ')') ||
                    (s[i] == '[' && s[j] == ']') ||
                    (s[i] == '<' && s[j] == '>')) {
                  flag[l] = flag[r] = true;
                } else {
                  cout << "No" << endl;
                  return;
                }
              }
            }
          }
        }
      }
    }

    if (!ff) {
      break;
    }
  }

  for (int i = 0; i < s.size(); i++) {
    if (!flag[i]) {
      cout << "No" << endl;
      return;
    }
  }

  cout << "Yes" << endl;
  return;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}