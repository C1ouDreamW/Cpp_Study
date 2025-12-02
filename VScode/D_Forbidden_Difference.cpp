#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {

  int n;
  int d;
  cin >> n >> d;
  map<int, int> mp1;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp1[x]++;
  }

  int cnt = 0;
  if (d == 0) {
    for (auto i : mp1) {
      cnt += i.second / 2;
    }
  } else {
    for (auto i : mp1) {
      int x = i.first;
      int cntx = i.second;
      if (cntx <= 0)
        continue;
      auto it = mp1.find(x + d);
      if (it == mp1.end() || it->second <= 0)
        continue;
      int cnt_1 = it->second;
      int c = min(cntx, cnt_1);
      cnt += c;
      i.second -= c;
      it->second -= c;
    }
  }

  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}
