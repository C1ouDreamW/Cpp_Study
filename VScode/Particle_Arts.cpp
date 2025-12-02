#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

// a和b相互碰撞，产生粒子 a&b 和 a|b
// 求经过足够长的时间后，所有粒子的方差收敛为的一个值
// 输出方差 x/y -- 保证 gcd(a,b)==1 , 当a=0,b=1

const int MAX_N = 17;
int bin_and[MAX_N], bin_or[MAX_N];

void solve() {
  memset(bin_and, -1, sizeof(bin_and));
  memset(bin_or, -1, sizeof(bin_or));
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = a[0];
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    int idx = 0;
    while (x) {
      int b = (x & 1);
      if (bin_and[idx] == -1) {
        bin_and[idx] = b;
      } else {
        bin_and[idx] += b;
      }
      if (bin_or[idx] == -1) {
        bin_or[idx] = b;
      } else {
        bin_or[idx] |= b;
      }
      x >>= 1;
      idx++;
    }
  }

  for (int i = 0; bin_and[i] != -1; i++) {
    if (bin_and[i] == n) {
      bin_and[i] = 1;
    } else {
      bin_and[i] = 0;
    }
    cout << bin_and[i] << " ";
  }
  cout << endl;
  for (int i = 0; bin_or[i] != -1; i++) {
    cout << bin_or[i] << " ";
  }
  cout << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}