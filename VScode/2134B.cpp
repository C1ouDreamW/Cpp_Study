#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
gcd(a[]) > 1
可以证明这总是可能的。

a[i] += m*k -- m<=k

设gcd(a[]) == x
a[i]+m1*k

gcd(a[]) == k+1
*/

void solve() {
  int n, k;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    int temp = x % (k + 1);
    cout << x + temp * k << " ";
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