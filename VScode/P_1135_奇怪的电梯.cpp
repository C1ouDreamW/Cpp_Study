#include <bits/stdc++.h>
using namespace std;

const int N = 210;
int n, a, b;
vector<int> v(210);
vector<int> path(210);

void solve() {
  cin >> n >> a >> b;
  if (a == b) {
    cout << 0 << endl;
    return;
  }
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  queue<int> floors;
  floors.push(a);
  while (!floors.empty()) {
    int floor = floors.front();
    if (floor == b)
      break;
    floors.pop();
    int up = floor + v[floor];
    int down = floor - v[floor];
    if (up >= 1 && up <= n && !path[up]) {
      path[up] = path[floor] + 1;
      floors.push(up);
    }
    if (down >= 1 && down <= n && !path[down]) {
      path[down] = path[floor] + 1;
      floors.push(down);
    }
  }
  if (!path[b]) {
    cout << -1 << endl;
  } else {
    cout << path[b] << endl;
  }
}

signed main() {
  solve();
  return 0;
}