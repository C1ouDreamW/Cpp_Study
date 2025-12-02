#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
const int N = 25;
int n;
int sum_goal = 0;
int north[N], west[N];
bool flag[N][N];
vector<int> path;

bool check() {
  for (int i = 1; i <= n; i++) {
    if (north[i] != 0 || west[i] != 0) {
      return false;
    }
  }
  if ((int)path.size() != (sum_goal / 2)) {
    return false;
  }
  return true;
}

void dfs(int x, int y) {
  if (x == n && y == n) {
    if (check()) {
      for (int i = 0; i < (int)path.size(); i++) {
        cout << path[i] << " ";
      }
      exit(0);
    }
    return;
  }
  for (int i = 0; i < 4; i++) {
    int xx = x + dx[i], yy = y + dy[i];
    if (xx >= 1 && yy >= 1 && xx <= n && yy <= n && !flag[xx][yy] &&
        north[yy] >= 1 && west[xx] >= 1) {
      flag[xx][yy] = true;
      north[yy]--;
      west[xx]--;
      path.push_back((xx - 1) * n + yy - 1);
      dfs(xx, yy);
      flag[xx][yy] = false;
      north[yy]++;
      west[xx]++;
      path.pop_back();
    }
  }
}

void solve() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> north[i];
    sum_goal += north[i];
  }
  for (int i = 1; i <= n; i++) {
    cin >> west[i];
    sum_goal += west[i];
  }
  north[1]--;
  west[1]--;
  path.push_back(0);
  dfs(1, 1);
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}