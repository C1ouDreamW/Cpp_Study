#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int N, M;     // 刚好把M块钱全部花完
int f[10010]; // 前i个菜品种，刚好花钱为j的方法的数量
/*
f[i][j] = f[i-1][j]+f[i-1][j-a[i]];


f[0][0] = 1;
f[1][1] = f[0][1]+f[0][0] = 1;
f[1][2] = f[0][2]+f[0][1] = 0;
f[1][3] = 0,f[1][4] = 0;

f[2][0] = 2;
f[3][2] = f[2][2] + f[2][0];

*/

void solve() {
  cin >> N >> M;
  vector<int> a(N + 10);
  for (int i = 1; i <= N; i++) {
    cin >> a[i];
  }

  f[0] = 1;
  for (int i = 1; i <= N; i++) {
    for (int j = M; j >= a[i]; j--) {
      f[j] = f[j] + f[j - a[i]];
      // printf("f[%lld,%lld] = %lld\n", i, j, f[i][j]);
    }
  }

  cout << f[M];
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}