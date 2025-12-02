#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

// 堆优化版 -- 稠密图
const int MAX_N = 5005, MAX_M = 200005;
int n, m;
int dist[MAX_M];
bool st[MAX_M];
int head[MAX_M], ne[MAX_M], e[MAX_M], we[MAX_M], idx;

void add(int a, int b, int w) {
  ne[idx] = head[a], head[a] = idx, e[idx] = b, we[idx++] = w;
}

priority_queue<PII, vector<PII>, greater<PII>> p;
// 优先队列存集合中元素向集合外元素的所有出边，堆顶为最小出边
// 到达树的最小距离已确认的元素

void prime() {
  memset(dist, 0x3f, sizeof dist);
  st[1] = true;
  dist[1] = 0;
  for (int i = head[1]; i != -1; i = ne[i]) {
    if (!st[i]) {
      dist[e[i]] = we[i];
      p.push({we[i], e[i]});
    }
  }

  while (!p.empty()) {
    int t = p.top().second;
    p.pop();
    st[t] = true;
    for (int i = head[t]; i != -1; i = ne[i]) {
      if (!st[i]) {
        if (dist[e[i]] > we[i]) {
          dist[e[i]] = we[i];
          p.push({we[i], e[i]});
        }
      }
    }
  }
}

void solve() {
  memset(head, -1, sizeof head);
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b, w;
    cin >> a >> b >> w;
    add(a, b, w);
    add(b, a, w);
  }
  prime();
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += dist[i];
  }
  cout << sum << endl;
}

// 朴素板 -- 稀疏图
// const int MAX_N = 5005, MAX_M = 5005;
// int ma[MAX_N][MAX_N];
// int dist[MAX_N];
// bool vt[MAX_N];
// int n, m;

// void prime() {
//   memset(dist, 0x3f, sizeof dist);
//   vt[1] = true;
//   dist[1] = 0;
//   for (int i = 1; i <= n; i++) {
//     int t = -1;
//     for (int j = 1; j <= n; j++) {
//       if (t == -1 || dist[t] > dist[j]) {
//         t = j;
//       }
//     }

//     for (int j = 1; j <= n; j++) {
//       dist[j] = min(dist[j], ma[t][j]);
//     }
//   }
// }

// void solve() {
//   memset(ma, 0x3f, sizeof ma);
//   cin >> n >> m;
//   for (int i = 0; i < m; i++) {
//     int a, b, w;
//     cin >> a >> b >> w;
//     ma[a][b] = min(ma[a][b], w);
//     ma[b][a] = min(ma[b][a], w);
//   }
//   prime();
//   int sum = 0;
//   for (int i = 1; i <= n; i++) {
//     sum += dist[i];
//   }
//   cout << sum << endl;
// }

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}