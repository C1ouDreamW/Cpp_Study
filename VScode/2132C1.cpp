#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
9 + 1*1 = 10 --> 3 --> 3.3
27 + 2*9 = 27+18=45 --> 9 --> 5

3 + 0 == 3 --> 1

次数最少
*/

void solve() {
  int n;
  cin >> n;

  int ans = 0, x = 0;
  while (n > 0) {
    int temp = n % 3;
    if (temp) {
      int cost;
      if (x == 0) {
        cost = 3;
      } else {
        cost = (int)powl(3, x + 1) + (int)x * (int)powl(3, x - 1);
      }
      ans += temp * cost;
    }
    n /= 3;
    x++;
  }
  cout << ans << endl;
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