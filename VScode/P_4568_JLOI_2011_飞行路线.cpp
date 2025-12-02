#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int n, m, k, s, t;
const int N = 50005;
int head[N], ne[N], e[N], we[N], idx;
int dist[N];

void add(int a, int b, int w) {
  ne[idx] = head[a], head[a] = idx, e[idx] = b, we[idx++] = w;
}

priority_queue<PII, vector<PII>, greater<PII>> p;
void dijkstra() {
  memset(dist, 0x3f, sizeof dist);
  dist[s] = 0;
  p.push({0, s});
  while (!p.empty()) {
    int j = p.top().second;
    p.pop();
    for (int i = head[j]; i != -1; i = ne[i]) {
      if (dist[j] + we[i] < dist[e[i]]) {
        dist[e[i]] = dist[j] + we[i];
        p.push({dist[e[i]], e[i]});
      }
    }
  }
}

void solve() {
  memset(head, -1, sizeof head);
  cin >> n >> m >> k >> s >> t;
  while (m--) {
    int a, b, c;
    cin >> a >> b >> c;
    add(a, b, c);
    add(b, a, c);
  }
  dijkstra();
  cout << dist[t] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}