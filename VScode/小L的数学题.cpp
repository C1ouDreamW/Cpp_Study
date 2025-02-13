#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, m;
  cin >> n >> m;

  if (n == m) {
    cout << "Yes" << endl;
    return;
  }
  if (n == 0 || m == 0) {
    cout << "No" << endl;
    return;
  }

  queue<int> q;
  map<int, int> mp;
  q.push(n);
  mp[n]++;

  while (!q.empty()) {
    int x = q.front();
    q.pop();
    if (x == n) {
      cout << "Yes" << endl;
      return;
    }
    int temp = x * 2;
    if (!mp[temp]) {
      q.push(x * 2);
      mp[temp]++;
    }
    temp = (int)sqrt(x);
    if (!mp[temp]) {
      q.push(x * 2);
      mp[temp]++;
    }
  }

  cout << "No" << endl;
  return;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}