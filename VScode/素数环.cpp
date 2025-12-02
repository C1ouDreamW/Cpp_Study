#include <bits/stdc++.h>
using namespace std;

int n;

bool isPrime(int x) {
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

bool vt[25];
vector<int> ans(25);
vector<vector<int>> allans(1000);
int idx = 0;
bool isFind = false;
int cnt = 0;

void dfs(int u) {
  if (u == n) {
    for (int i = 0; i < n; i++) {
      int x = ans[i] + ans[i + 1];
      if (!isPrime(x)) {
        return;
      }
    }
    isFind = true;
    cnt++;
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
    return;
  }

  for (int i = 2; i <= n; i++) {
    if (!vt[i] && isPrime(i + ans[u - 1])) {
      vt[i] = true;
      ans[u] = i;
      dfs(u + 1);
      vt[i] = false;
    }
  }
}

void solve() {
  cin >> n;
  if (n == 1) {
    cout << 1 << endl;
    return;
  }

  ans[0] = ans[n] = 1;
  dfs(1);
  if (!isFind) {
    cout << "No Answer" << endl;
  }
}

int main() {
  solve();
  return 0;
}