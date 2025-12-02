#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 500001;
int head[N], e[N], ne[N];
int idx = 0;

void add(int a, int b) {
  e[idx] = b;
  ne[idx] = head[a];
  head[a] = idx++;
}

void solve() {
  memset(head, -1, sizeof(head));
  int n, m, s;
  cin >> n >> m >> s;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    add(a, b);
    add(b, a);
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