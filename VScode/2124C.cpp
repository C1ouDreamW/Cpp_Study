#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
Alice : a[i+1]%a[i] == 0 -- 后一个数是前一个数的倍数
后面所有数都是第一个数的倍数

b = a[i]*x,i任意

b[i]/x 满足 a[i]

Bob的操作只能使数值增大
特判没操作的序列
若有操作：
1.如果所有元素都*x，则没用，所以一定有至少一个没有*x
2.两个数而言，如果前面得数大于后面的数，则前面一定乘了，后面一定没乘
（最初a<b，操作后a>b -- 因为a*c<b*c a*c可能大于b，证得2结论）
3.遍历b,若有b[i]>b[j]，则b[j]没乘，以b[j]为基准
所有数除以基准数

1.若a[0]没变：
7 42 14 14 28 73080
b[0] = a[0]
a[1] = a[0]*c
b[1] = a[1]*x = a[0]*c*x = b[0]*x*c
c*x = b[1]/b[0]
c递增

42 84 --/b[0]-- 6 12 x取最小
*/

// void solve() {
//   int n;
//   cin >> n;
//   vector<int> b(n);
//   for (int i = 0; i < n; i++)
//     cin >> b[i];
//   bool f = true;
//   vector<int> xs;
//   int min_b = INT_MAX;
//   for (int i = 0; i < n - 1; i++) {
//     if (b[i] > b[i + 1]) {
//       f = false;
//       min_b = min(min_b, b[i + 1]);
//     }
//   }
//   if (f) {
//     cout << 1 << endl;
//     return;
//   }

//   for (int i = 0; i < n; i++) {
//     xs.push_back(a[i] /)
//   }
// }

void solve() {
  int n;
  cin >> n;
  vector<int> b(n);

  for (int i = 0; i < n; i++)
    cin >> b[i];
  cout << gcd(42, 14) << endl;
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