#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
max : abs(x[a1]-x[b1])+abs(y[a1]-y[b1])


输出点组合

将点集平均分为四部分，
相对位置为左上左下右上右下

最终匹配为左上与右下 左下与右上
*/

#define first x
#define second y

struct node {
  int x, y, id;
};

bool cmp1(node &A, node &B) { // x升序
  if (A.x != B.x) {
    return A.x < B.x;
  }
  return A.y < B.y;
}

bool cmp2(node &A, node &B) { // y升序
  if (A.y != B.y) {
    return A.y < B.y;
  }
  return A.x < B.x;
}

void solve() {
  int n;
  cin >> n;
  vector<node> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].x >> a[i].y;
    a[i].id = i + 1;
  }
  sort(a.begin(), a.end(), cmp1);
  vector<node> x1(n / 2), x2(n / 2);
  for (int i = 0; i < n / 2; i++) {
    x1[i] = a[i];
  }
  for (int i = n / 2; i < n; i++) {
    x2[i - n / 2] = a[i];
  }
  sort(x1.begin(), x1.end(), cmp2);
  sort(x2.begin(), x2.end(), cmp2);
  vector<node> lu(n / 4), ld(n / 4), ru(n / 4), rd(n / 4);
  for (int i = 0; i < n / 4; i++) { // 左下
    ld[i] = x1[i];
  }
  for (int i = n / 4; i < n / 2; i++) { // 左上
    lu[i - n / 4] = x1[i];
  }
  for (int i = 0; i < n / 4; i++) { // 右下
    rd[i] = x2[i];
  }
  for (int i = n / 4; i < n / 2; i++) { // 右上
    ru[i - n / 4] = x2[i];
  }

  int sum = 0;

  for (int i = 0; i < n / 4; i++) {
    sum += abs(lu[i].x - rd[i].x) + abs(lu[i].y - rd[i].y);
  }
  for (int i = 0; i < n / 4; i++) {
    sum += abs(ld[i].x - ru[i].x) + abs(ld[i].y - ru[i].y);
  }
  cout << sum << endl;
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