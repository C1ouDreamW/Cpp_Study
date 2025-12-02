#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
cost = 2

4 2
1 1 1 1
2 2 2
4 4

*/

bool f[31];

void solve() {
  memset(f, 0, sizeof f);
  int n, c;
  cin >> n >> c;
  vector<PII> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    int time = 0;
    for (int j = 1; j <= n; j++) {
      int now = x;
      for (int k = 0; k < j - 1; k++) {
        now *= 2;
      }
      if (now <= c) {
        time = j;
      } else {
        break;
      }
    }
    a.push_back({time, i});
  }

  sort(a.begin(), a.end());

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int time = a[i].first;
    if (time == 0) {
      continue;
    }

    for (int j = 1; j <= time; j++) {
      if (!f[j]) {
        f[j] = true;
        cnt++;
        break;
      }
    }
  }

  cout << n - cnt << endl;
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