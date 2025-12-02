#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int MAX_N = 1010;
int lose[MAX_N], win[MAX_N], use[MAX_N];
int f[MAX_N]; // 表示考虑前i个敌人用药数最大为j的情况下最大经验值

/*
f[i][j] = max(f[i-1][j],f[i-1][j-use[i]])
*/

void solve() {
  int n, x;
  cin >> n >> x; // 总共n个敌人 x个药品
  for (int i = 1; i <= n; i++) {
    cin >> lose[i] >> win[i] >> use[i];
  }

  for (int i = 1; i <= n; i++) {
    for (int j = x; j >= use[i]; j--) {
      f[j] = max(f[j] + lose[i], f[j - use[i]] + win[i]); // 输或赢
    }
    for (int j = use[i] - 1; j >= 0; j--) {
      f[j] = f[j] + lose[i];
    }
  }
  cout << f[x] * 5 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}