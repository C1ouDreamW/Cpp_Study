#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1000000007;

int pow2(int base, int c) {
  int res = 1;
  if (c == 0)
    return res;
  for (int i = 0; i < c; i++) {
    res *= 2;
    res %= MOD;
  }
  return res;
}

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  // 字符串长度为1
  if (n == 1) {
    if (s[0] == '?') {
      cout << 2 << endl;
    } else {
      cout << 1 << endl;
    }
    return;
  }

  int ans = 0;
  char first = s[0], last = s[n - 1];
  int cnt = count(s.begin(), s.end(), '?');
  // 首尾没有问号
  if (first != '?' && last != '?') {
    if (first == last) { // 首尾相同
      ans = (n - 2) * pow2(2, cnt);
    } else { // 首尾不同
      ans = (2 * pow2(2, cnt));
    }
  }
  // 首尾有一个问号
  else if ((first == '?' && last != '?') || (first != '?' && last == '?')) {
    ans = n * pow2(2, cnt - 1);
  }
  // 首尾有两个问号
  else if (first == '?' && last == '?') {
    ans = n * pow2(2, cnt - 1);
  }

  cout << ans % MOD << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}