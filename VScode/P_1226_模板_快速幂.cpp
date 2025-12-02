#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
typedef unsigned long long ull;

ull ksm(ull a, ull b, ull p) {
  a %= p, b %= p;
  ull c = (long double)a * b / p;
  ull x = a * b, y = c * p;
  int ans = (int)(x % p) - (int)(y % p);
  if (ans < 0)
    ans += p;
  return ans;
}

void solve() {
  ull a, b, p;
  cin >> a >> b >> p;
  cout << ksm(a, b, p);
  printf("%lld^%lld mod %lld=%lld", a, b, p, ksm(a, b, p));
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}