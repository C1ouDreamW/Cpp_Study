#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans = 1;
void solve() {
  ll n;
  cin >> n;
  // ll ans=1;
  ll f = 0;
  for (ll i = 1; i <= n; i++) {
    ll x;
    cin >> x;
    if (x == 1) {
      f = 1;
    }
  }
  if (!f) {
    cout << "1000000007" << endl;
  } else {
    cout << "-1" << endl;
  }
}

signed main() {
  ll t;
  // t=1;
  cin >> t;
  while (t--) {
    solve();
  }
}