#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
1. -m -- 0
2. 0 -- m
3. -x -- y 设向左x步，向右y步
3.1 x*2+y = m
3.2 x+y*2 = m
*/

const int N = 2000020;
const int z = 1e6 + 10;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(N), pre(N);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] += z;
    pre[a[i]]++;
  }
  for (int i = 1; i < N; i++) {
    pre[i] += pre[i - 1];
  }

  // 3.1
  int max_val = 0;
  for (int x = 1; x * 2 < m; x++) {
    int y = m - x * 2;
    max_val = max(max_val, pre[y + z] - pre[z - x - 1]);
  }
  // 3.2
  for (int y = 1; y * 2 < m; y++) {
    int x = m - y * 2;
    max_val = max(max_val, pre[y + z] - pre[z - x - 1]);
  }
  cout << max(max_val, max(pre[m + z] - pre[z - 1], pre[z] - pre[z - m - 1]));
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}