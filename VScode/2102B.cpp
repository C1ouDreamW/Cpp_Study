#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
令a[i] = -a[i];
让a[i] = 数组的中位数
YES or NO
中位数：数组排序后，第m/2（向上取整）小的元素
如果a[i]和-a[i]都小于 x ，则a[i]只能在x左侧 cnt_left++；都大于x，则只能在右侧
反之则两侧都可以在 cnt_two++

如果存在左侧数量符合条件，则YES
*/

int n, idx;
bool flag;

bool check(int x, const vector<int> &a) {

  int left = idx - 1;
  int cnt_left = 0;
  int cnt_two = 0;

  for (int i = 1; i < n; i++) {
    int y = abs(a[i]);
    if (y < x) {
      cnt_left++;
    } else if (-y >= x) {
      continue;
    } else {
      cnt_two++;
    }
  }

  if ((cnt_left <= left) && (cnt_left + cnt_two >= left)) {
    return true;
  }
  return false;
}

void solve() {
  cin >> n;
  flag = false;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  idx = (n + 1) / 2;
  // a[0]数值不变
  if (check(a[0], a)) {
    flag = true;
  }
  // a[0]取反
  if (!flag && a[0] != 0) {
    if (check(-a[0], a)) {
      flag = true;
    }
  }

  if (flag) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
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