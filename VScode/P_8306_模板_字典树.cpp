#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 1e6;
vector son[N][80];
int cnt[N];
int idx = 0;

void insert(string s) {
  int p = 0;
  for (int i = 0; s[i]; i++) {
    int num = s[i] - '0';
    if (!son[p][num]) {
      son[p][num] = ++idx;
    }
    p = son[p][num];
  }
  cnt[p]++;
}

int find_loc(string s) {
  int p = 0;
  for (int i = 0; s[i]; i++) {
    int num = s[i] - '0';
    if (!son[p][num]) {
      return 0;
    }
    p = son[p][num];
  }

  return p;
}

int dfs(int p) {
  int c = cnt[p];
  for (int i = 0; i < 52; i++) {
    if (son[p][i]) {
      c += dfs(son[p][i]);
    }
  }
  return c;
}

void solve() {
  idx = 0;
  memset(cnt, 0, sizeof(cnt));
  memset(son, 0, sizeof(son));
  int n, q;
  cin >> n >> q;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    insert(s);
  }

  for (int i = 0; i < q; i++) {
    string s;
    cin >> s;
    int p = find_loc(s);
    if (p) {
      cout << dfs(p) << endl;
    } else {
      cout << 0 << endl;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}