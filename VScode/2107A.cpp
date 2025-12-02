#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
将a数组内元素分为两组，保证gcd(B_all)!=gcd(C_all);

NO：所有元素都相等
若数列存在两种以上元素，则可以最大的一种元素单独分出，使得其gcd等于它本身
其他元素无论如何gcd都不可能等于这个最大的元素
所以其他情况均为YES.
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  bool isAll = true;
  int temp = 0, max_val = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    max_val = max(max_val, a[i]);
    if (temp) {
      if (a[i] != temp) {
        isAll = false;
      }
    } else {
      temp = a[i];
    }
  }
  if (isAll) {
    cout << "No" << endl;
    return;
  } else {
    cout << "Yes" << endl;
  }

  for (int i = 0; i < n; i++) {
    if (a[i] == max_val) {
      cout << 2 << " ";
    } else {
      cout << 1 << " ";
    }
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