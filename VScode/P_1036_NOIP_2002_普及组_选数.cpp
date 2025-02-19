#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int a[25], v[25];
int n, k;
int cnt = 0;
int sum = 0;

bool isprime(int a) {
  if (a == 1)
    return false;
  for (int i = 2; i * i <= a; i++)
    if (a % i == 0)
      return false;
  return true;
}

void dfs(int u, int x) {
  if (u == k) {
    if (isprime(sum)) {
      cnt++;
    }
    return;
  }

  for (int i = x; i < n; i++) {
    if (!v[i]) {
      v[i] = 1;
      sum += a[i];
      dfs(u + 1, i + 1);
      v[i] = 0;
      sum -= a[i];
    }
  }
}

void solve() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  dfs(0, 0);

  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}