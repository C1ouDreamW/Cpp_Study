#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
贪心地选择real最多的赌场

思路正确
贪心
先用左端点排序，之后用优先队列找每个状态最佳赌场，
并检查右端点，即可筛选满足条件的赌场

*/

struct node {
  int l, r, real;
};

bool cmp(node &A, node &B) {
  if (A.l != B.l) {
    return A.l < B.l;
  }
  return A.r < B.r;
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<node> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].l >> a[i].r >> a[i].real;
  }
  sort(a.begin(), a.end(), cmp);

  int idx = 0;
  priority_queue<PII> pq;
  while (true) {
    while (idx < n && a[idx].l <= k) {
      pq.push({a[idx].real, a[idx].r});
      idx++;
    }
    while (!pq.empty() && pq.top().second < k) {
      pq.pop();
    }
    if (pq.empty()) {
      break;
    }
    int max_real = pq.top().first;
    if (max_real <= k) {
      break;
    }
    k = max_real;
    pq.pop();
  }
  cout << k << endl;
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