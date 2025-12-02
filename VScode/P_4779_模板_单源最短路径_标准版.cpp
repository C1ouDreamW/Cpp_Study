#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int MAX_N = 100010, MAX_M = 200010;
int head[MAX_N], e[MAX_M], ne[MAX_M], we[MAX_M], idx;
int dist[MAX_N];
bool st[MAX_N];
int n, m, s;
priority_queue<PII> pq;
void add(int u, int v, int w) {
  e[idx] = v, ne[idx] = head[u], head[u] = idx, we[idx++] = w;
}

void dijkstra() {
  pq.push({0, s});
  dist[s] = 0;
  while (!pq.empty()) {
    int t = pq.top().second;
    pq.pop();
    if (st[t])
      continue;
    st[t] = true;
    for (int i = head[t]; i != -1; i = ne[i]) {
      int j = e[i], jw = we[i];
      if (dist[j] > dist[t] + jw) {
        dist[j] = dist[t] + jw;
        if (!st[j]) {
          pq.push({-dist[j], j});
        }
      }
    }
  }
}

void solve() {
  memset(head, -1, sizeof head);
  cin >> n >> m >> s;
  for (int i = 0; i <= n; i++)
    dist[i] = 0x7fffffff;
  while (m--) {
    int u, v, w;
    cin >> u >> v >> w;
    add(u, v, w);
  }
  dijkstra();
  for (int i = 1; i <= n; i++) {
    cout << dist[i] << " ";
  }
  cout << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}