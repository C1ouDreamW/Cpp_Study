#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
int vt[20];

void dfs(int u) {
  if (u == n + 1) {
    for (int i = 1; i <= n; i++) {
      if (vt[i])
        cout << i << " ";
    }
    cout << endl;
    return;
  }
  vt[u] = false;
  dfs(u + 1);
  vt[u] = true;
  dfs(u + 1);
}

signed main() {
  cin >> n;
  dfs(1);
  return 0;
}