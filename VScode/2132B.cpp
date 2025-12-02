#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
任意数x
x末尾加任意个0变为y

使得 x+y == n

x+(x*i个10) == n

x + (x*10^i) = n

x = n/(1+10^i)
枚举i
*/

void solve() {
  int n;
  cin >> n;
  vector<int> ans;
  int base = 10;
  for (int i = 1; i <= 18; i++) {
    if (base + 1 > n) {
      break;
    }
    if (n % (base + 1) == 0) {
      int x = n / (base + 1);
      ans.push_back(x);
    }
    base *= 10;
  }
  sort(ans.begin(), ans.end());
  if (ans.size() == 0) {
    cout << 0 << endl;
    return;
  }
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
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