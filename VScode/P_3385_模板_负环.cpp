#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int MAX_N = 100010, MAX_M = 200010;
int head[MAX_N], e[MAX_M], ne[MAX_M], we[MAX_M], idx;
int dist[MAX_N], cnt[MAX_N];
bool st[MAX_N];
int n, m;
void add(int u, int v, int w) {
  e[idx] = v, ne[idx] = head[u], head[u] = idx, we[idx++] = w;
}

bool spfa() {
  memset(dist, 0x3f, sizeof dist);
  queue<int> q;
  // for (int i = 1; i <= n; i++) {
  //   st[i] = true;
  //   q.push(i);
  // }
  dist[1] = 0;
  st[1] = 1;
  q.push(1);
  while (!q.empty()) {
    int t = q.front();
    q.pop();
    st[t] = false;
    for (int i = head[t]; i != -1; i = ne[i]) {
      int j = e[i];
      if (dist[t] + we[i] < dist[j]) {
        dist[j] = dist[t] + we[i];
        cnt[j] = cnt[t] + 1;
        if (cnt[j] >= n) {
          return true;
        }
        if (!st[j]) {
          st[j] = true;
          q.push(j);
        }
      }
    }
  }
  return false;
}

void solve() {
  memset(head, -1, sizeof head);
  memset(st, 0, sizeof st);
  memset(dist, 0, sizeof dist);
  memset(cnt, 0, sizeof cnt);
  idx = 0;
  cin >> n >> m;
  while (m--) {
    int u, v, w;
    cin >> u >> v >> w;
    add(u, v, w);
  }
  if (spfa()) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
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