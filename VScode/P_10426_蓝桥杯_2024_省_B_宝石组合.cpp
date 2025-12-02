#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; };

int lcm(int a, int b) { return a * b / gcd(a, b); }

int cal(int a, int b, int c) {
  int s = (a * b * c * lcm(lcm(a, b), c)) / (lcm(a, b) * lcm(a, c) * lcm(b, c));
  return s;
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int r1, r2, r3;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int max_ = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        int x = cal(a[i], a[j], a[k]);
        if (x > max_) {
          max_ = x;
          r1 = a[i], r2 = a[j], r3 = a[k];
        }
      }
    }
  }
  cout << r1 << " " << r2 << " " << r3 << " " << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}