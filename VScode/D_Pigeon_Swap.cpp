#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
int n;
int q;
const int N = 1e6 + 7;
int arr[N], idx[N], idx22[N];

int find(int a) {
  int fa = 0;
  fa = arr[a];
  while (fa != -1) {
    a = fa;
    fa = arr[fa];
  }
  return a;
}

void solve() {
  cin >> n;
  cin >> q;
  for (int i = 1; i <= n; i++) {
    arr[i] = i;
    idx[i] = i;
    idx22[i] = i;
  }

  for (int i = 0; i < q; i++) {
    int type;
    cin >> type;
    switch (type) {
      int a, b;
    case 1:
      cin >> a >> b;
      arr[a] = idx[b];
      break;
    case 2:
      cin >> a >> b;
      swap(idx[idx22[a]], idx[idx22[a]]);
      swap(idx22[a], idx22[b]);
      break;
    case 3:
      cin >> a;
      cout << idx[arr[a]] << endl;
      break;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}