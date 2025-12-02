#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int n;
const int N = 500005;
bool flag[N];
vector<int> path;
bool ff = true;
int sum = 0;

void dfs(int u) {
  if (u == n + 1) {
    ff = false;
    return;
  }

  for (int i = 1; i <= n; i++) {
    if (ff) {
      if (!flag[i]) {
        sum += i;
        if (sum != u * u) {
          flag[i] = true;
          path.push_back(i);
          dfs(u + 1);
          if (ff) {
            flag[i] = false;
            path.pop_back();
          } else {
            return;
          }
        }
        sum -= i;
      }
    } else {
      return;
    }
  }
}

void solve() {
  cin >> n;
  if (n * n == ((n + 1) * n) / 2) {
    cout << -1 << endl;
    return;
  } else {
    dfs(1);
  }
  if (path.size() == n) {
    for (int i = 0; i < (int)path.size(); i++) {
      cout << path[i] << " ";
    }
    cout << endl;
  } else {
    cout << -1 << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    path.clear();
    memset(flag, 0, sizeof(flag));
    ff = true;
    sum = 0;
    solve();
  }
  return 0;
}