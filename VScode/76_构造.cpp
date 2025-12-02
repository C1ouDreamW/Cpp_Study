#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
构造排列(1,n)

每个区间的gcd按位异或 == m



若m为奇数
m-1 ^ 1 == m
n>=m-1时，单拿出m-1，其余构造奇数1

*/

void solve() {
  int n, m;
  cin >> n >> m;
  if (m % 2 == 0) {
    cout << -1 << endl;
    return;
  }
  if (n == m - 1) {
    for (int i = n; i >= 1; i--)
      cout << i << " ";
    cout << endl;
    if (n % 2 == 0) {
      cout << n / 2 + 1 << endl;
      cout << 1 << " " << 1 << endl;
      for (int i = 2; i < n; i += 2) {
        cout << i << " " << i + 1 << endl;
      }
      cout << n << " " << n << endl;
    } else {
      cout << (n - 1) / 2 + 1 << endl;
      for (int i = 1; i < n; i += 2) {
        cout << i << " " << i + 1 << endl;
      }
      cout << n << " " << n << endl;
    }
  } else
    cout << -1 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}