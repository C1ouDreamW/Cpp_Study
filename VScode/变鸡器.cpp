#include <bits/stdc++.h>
using namespace std;
#define int long long

char dc[7] = {'C', 'H', 'I', 'C', 'K', 'E', 'N'};

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int idx = 0;
  int max_0 = 0;
  vector<int> a(26);
  priority_queue<int> pq;
  for (int i = 0; i < n; i++) {
    if (idx < 7 && s[i] == dc[idx]) {
      idx++;
    } else {
      a[s[i] - 'A']++;
      max_0 = max(max_0, a[s[i] - 'A']);
    }
  }
  if (idx < 7) {
    cout << "NO" << endl;
    return;
  }
  if ((n - 7) % 2 != 0) {
    cout << "NO" << endl;
    return;
  }
  for (int i = 0; i < a.size(); i++) {
    if (a[i]) {
      pq.push(a[i]);
    }
  }

  if (max_0 <= (n - 7) / 2) {
    cout << "YES" << endl;
    return;
  } else {
    cout << "NO" << endl;
  }
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}