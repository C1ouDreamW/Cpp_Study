#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 8;
const string S = "uwawauwa";

void solve() {
  int n;
  cin >> n;
  int cnt = 0;
  string s, temp;
  cin >> s;
  int l = 0;
  int cnt_u = 0;
  while (l + 8 <= n) {
    temp = s.substr(l, N);
    if (s[l] == 'u') {
      cnt_u++;
    }
    if (temp == S) {
      cnt += cnt_u - 1;
      if (l > 0) {
        if (s[l - 1] == 'u') {
          cnt--;
        }
      }
    }
    l++;
  }
  cout << cnt << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}