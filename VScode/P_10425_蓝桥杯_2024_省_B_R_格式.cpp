#include <bits/stdc++.h>
using namespace std;
#define int long long

int she(double d) {
  int ii = (int)d;
  d = d - ii;
  double half = 0.5;
  if (d >= half) {
    ii++;
  }

  return ii;
}

void solve() {
  int n;
  cin >> n;
  double d;
  cin >> d;
  double mi = pow(2, n);
  d *= mi;

  cout << she(d) << endl;
}

signed main() {
  solve();
  return 0;
}