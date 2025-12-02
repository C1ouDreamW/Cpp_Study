#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
i -- 2-n
sum(f(i))

2 3 4 5
2+3+2+5 = 12
*/

const int MAX_N = 3 * 1e6;

vector<int> ans(MAX_N + 10);
vector<bool> vt(MAX_N + 10);

void prime(int n) {
  for (int i = 2; i <= n; i++) {
    if (!vt[i]) {
      ans[i] = i;
      for (int j = i * i; j <= n; j += i) {
        vt[j] = true;
        if (!ans[j]) {
          ans[j] = i;
        }
      }
    }
  }
}

void solve() {
  int n;
  cin >> n;
  cout << ans[n] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  prime(MAX_N);
  for (int i = 2; i <= MAX_N; i++)
    ans[i] += ans[i - 1];
  while (t--) {
    solve();
  }
  return 0;
}