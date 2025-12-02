#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

typedef unsigned long long ULL;
// 遍历前缀和后缀相等的长度
const int P = 131, MAX_N = 400003;
ULL p[MAX_N], h[MAX_N];

void cal(string &s) {
  h[0] = 0;
  for (int i = 1; i < s.size(); i++) {
    h[i] = h[i - 1] * P + s[i];
  }
}

ULL find(int l, int r) { return h[r] - h[l - 1] * p[r - l + 1]; }

void solve() {
  string s;
  p[0] = 1;
  for (int i = 1; i < MAX_N; i++) {
    p[i] = p[i - 1] * P;
  }
  while (cin >> s) {
    s = "0" + s;
    int n = s.size();
    cal(s);
    for (int i = 1; i < s.size(); i++) {
      if (find(1, i) == find(n - i, n - 1)) {
        cout << i << " ";
      }
    }
    cout << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}