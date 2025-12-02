#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

struct node {
  bool isL;
  int len;
};

const int N = 1000010;

void solve() {
  vector<node> a;
  string p, s;
  cin >> p >> s;
  bool flag = false;
  int cnt = 0;
  // p
  for (int i = 0; i < p.size(); i++) {
    if (p[i] == 'L') {
      if (flag) {
        cnt++;
      } else {
        if (cnt) {
          a.push_back({0, cnt * 2});
        }
        flag = true;
        cnt = 1;
      }
    } else {
      if (!flag) {
        cnt++;
      } else {
        if (cnt) {
          a.push_back({1, cnt * 2});
        }
        flag = false;
        cnt = 1;
      }
    }
  }
  if (flag) {
    a.push_back({1, cnt * 2});
  } else {
    a.push_back({0, cnt * 2});
  }

  // s
  cnt = 0;
  int idx = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'L') {
      if (flag) {
        cnt++;
      } else {
        if (cnt) {
          if (idx >= a.size()) {
            cout << "NO" << endl;
            return;
          }
          if (a[idx].isL == flag && a[idx].len >= cnt &&
              a[idx].len / 2 <= cnt) {
          } else {
            cout << "NO" << endl;
            return;
          }
          idx++;
        }
        flag = true;
        cnt = 1;
      }
    } else {
      if (!flag) {
        cnt++;
      } else {
        if (cnt) {
          if (idx >= a.size()) {
            cout << "NO" << endl;
            return;
          }
          if (a[idx].isL == flag && a[idx].len >= cnt &&
              a[idx].len / 2 <= cnt) {
          } else {
            cout << "NO" << endl;
            return;
          }
          idx++;
        }
        flag = false;
        cnt = 1;
      }
    }
  }
  if (idx >= a.size()) {
    cout << "NO" << endl;
    return;
  }
  if (a[idx].isL == flag && a[idx].len >= cnt && a[idx].len / 2 <= cnt) {
  } else {
    cout << "NO" << endl;
    return;
  }
  idx++;
  if (idx < a.size()) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}