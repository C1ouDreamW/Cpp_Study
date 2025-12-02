#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 1e6;
int son[N][2];
int cnt[N];
int idx = 0;

void insert(int n) {
  int p = 0;
  int x;
  for (int i = 31; i >= 0; i--) {
    x = (n >> i) & 1;
    if (!son[p][x]) {
      son[p][x] = ++idx;
    }
    p = son[p][x];
  }
  cnt[son[p][x]]++;
}

vector<int> ans() {}

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    insert(x);
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}