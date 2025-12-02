#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
爱丽丝先出

*/

void solve() {
  int n;
  cin >> n;
  vector<int> a, b;
  char one;
  cin >> one;
  for (int i = 2; i <= n; i++) {
    char c;
    cin >> c;
    if (c == 'A')
      a.push_back(i);
    else
      b.push_back(i);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if (one == 'A') {
    a.push_back(1);
  } else
    b.push_back(1);
  cout << "1 in " << one << "'s head" << endl;
  cout << "Alice: ";
  for (auto i : a)
    cout << i << " ";
  cout << endl << "Bob: ";
  for (auto i : b)
    cout << i << " ";
  cout << endl;
  cout << endl;
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