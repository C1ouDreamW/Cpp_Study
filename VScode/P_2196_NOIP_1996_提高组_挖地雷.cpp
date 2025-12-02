#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int n;

void solve() {
  cin >> n;
  vector<vector<int>> link(n + 1, vector<int>(n + 1));
  vector<int> num(n + 1);
  for (int i = 0; i <= n; i++) {
    cin >> num[i];
  }
  for (int i = 1; i < n; i++) {
    for (int j = i + 1; j <= n; j++) {
      cin >> link[i][j];
    }
  }
  cout << endl;
  for (int i = 1; i < n; i++) {
    for (int j = i + 1; j <= n; j++) {
      cout << link[i][j] << " ";
    }
    cout << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}