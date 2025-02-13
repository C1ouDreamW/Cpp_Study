#include <bits/stdc++.h>
using namespace std;
#define int long long

// 万能和限制万能

void solve() {
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp[x]++;
  }
  auto it = mp.rbegin();
  it++;
  for (auto it_1 = it; it_1 != mp.rend(); it_1++) {
    if (it_1->second % 2 == 0) {
      continue;
    }
    for (auto it_2 = it_1; it_2 != mp.rend(); it_2++) {
      if (it_1 == it_2) {
        continue;
      }
      if (it_1->first == it_2->first + 1 && it_2->second > 1) {
        it_2->second--;
        break;
      } else {
        cout << "No" << endl;
        return;
      }
      cout << "No" << endl;
    }
  }

  cout << "Yes" << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}