#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int rate = 0;
  int m = 0;
  queue<int> q;
  for (int i = 0; i < n; i++) {
    if (!q.empty()) {
      if (q.front()) {
        rate = q.front();
      }
      q.pop();
    }

    if (s[i] == '0') {
      rate += 10;
    } else if (s[i] == '1') {
      rate -= 5;
      if (rate < 0)
        rate = 0;
    } else if (s[i] == '2') {
      q.push(rate);
      rate -= 10;
      if (rate < 0)
        rate = 0;
    }

    m += rate;
  }
  cout << m << endl;
}

signed main() {
  solve();
  return 0;
}