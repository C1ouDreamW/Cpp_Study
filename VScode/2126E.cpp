#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
p[n] == s[1] --> 整个数组gcd的结果

p[2] = gcd(a[1],a[2])
p[3] = gcd(a[1],a[2],a[3]) = gcd(gcd(a[1],a[2]),a[3]) = gcd(p[2],a[3]);
p[2]%p[3] == 0
a[3]%p[3] == 0

s[2] = gcd(a[2],a[3]...,a[n]) = gcd(s[3],a[2]) --> s[3]%s[2] == 0
a[2]%s[3] == 0
a[3]%s[4] == 0
s[3] = gcd(a[3],...,a[n])
*/

/*
jiangly:
构造a数组
a[i] = lcm(p[i],s[i])

构造合理性证明
p[i] 为 a 的前缀gcd --> a[i]为p[i]的倍数
s[i] 为 a 的后缀gcd --> a[i]也为p[i]的倍数
所以a[i]可以为p[i]和s[i]的共同倍数 即a[i]为p[i]和s[i]的公倍数
在这些可能的公倍数中我们选择最小公倍数lcm
如果lcm都无法满足条件，那么其他选择也将不能满足条件
*/

void solve() {
  int n;
  cin >> n;
  vector<int> p(n + 1), s(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> p[i];
  for (int i = 1; i <= n; i++)
    cin >> s[i];
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    a[i] = lcm(p[i], s[i]);
  }

  int pg = 0;
  for (int i = 1; i <= n; i++) {
    // 累计前缀gcd
    pg = gcd(a[i], pg);
    if (pg != p[i]) {
      cout << "NO" << endl;
      return;
    }
  }
  int sg = 0;
  for (int i = n; i > 0; i--) {
    // 累计后缀gcd
    sg = gcd(a[i], sg);
    if (sg != s[i]) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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