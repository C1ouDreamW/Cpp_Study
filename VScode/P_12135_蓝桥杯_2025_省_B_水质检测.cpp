#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  string s1, s2;
  cin >> s1 >> s2;
  int n = s1.size();
  int cnt = 0;
  int l, r;
  for (int i = 0; i < n; i++) {
    if (s1[i] == '#' || s2[i] == '#') {
      l = i;
      break;
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    if (s1[i] == '#' || s2[i] == '#') {
      r = i;
      break;
    }
  }

  for (int i = l + 1; i <= r; i++) {
    if (s1[i - 1] == '#' && s1[i] == '.' && s2[i - 1] == '.' &&
        s2[i - 1] == '.') {
      cnt++;
      s1[i] = '#';
    } else if (s1[i - 1] == '.' && s1[i] == '.' && s2[i - 1] == '#' &&
               s2[i - 1] == '.') {
      cnt++;
      s2[i] = '#';
    } else if (s1[i - 1] == '#' && s1[i] == '.' && s2[i - 1] == '.' &&
               s2[i - 1] == '#') {
      cnt++;
      s1[i] = '#';
    } else if (s1[i - 1] == '.' && s1[i] == '#' && s2[i - 1] == '#' &&
               s2[i - 1] == '.') {
      cnt++;
      s2[i] = '#';
    } else if ((s1[i] == '#' && s1[i - 1] == '#') ||
               (s2[i] == '#' && s2[i] == '#')) {
      continue;
    }
  }

  for (int i = r - 1; i >= l; i--) {
    if (s1[i + 1] == '#' && s1[i] == '.' && s2[i + 1] == '.' &&
        s2[i + 1] == '.') {
      cnt++;
      s1[i] = '#';
    } else if (s1[i + 1] == '.' && s1[i] == '.' && s2[i + 1] == '#' &&
               s2[i + 1] == '.') {
      cnt++;
      s2[i] = '#';
    } else if (s1[i + 1] == '#' && s1[i] == '.' && s2[i + 1] == '.' &&
               s2[i + 1] == '#') {
      cnt++;
      s1[i] = '#';
    } else if (s1[i + 1] == '.' && s1[i] == '#' && s2[i + 1] == '#' &&
               s2[i + 1] == '.') {
      cnt++;
      s2[i] = '#';
    } else if ((s1[i] == '#' && s1[i + 1] == '#') ||
               (s2[i] == '#' && s2[i] == '#')) {
      continue;
    }
  }

  for (int i = l + 1; i <= r - 1; i++) {
    if (s1[i] == '.' && s2[i] == '.') {
      cnt++;
    }
  }
  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}