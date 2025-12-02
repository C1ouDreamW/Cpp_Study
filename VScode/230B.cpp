#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
4 -- 2 1 4
5 -- 1 5
6 -- 2 3 6 1

T-质数： 有除1和其本身外的唯一正被除数（开根为质数）
2 4 6 8 10 12
*/

bool isprime(int a) {
  if (a == 1)
    return false;
  for (int i = 2; i * i <= a; i++)
    if (a % i == 0)
      return false;
  return true;
}

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    int sx = sqrt(x);
    if (sx * sx == x) {
      if (isprime(sx)) {
        cout << "YES" << endl;
        continue;
      }
    }
    cout << "NO" << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}