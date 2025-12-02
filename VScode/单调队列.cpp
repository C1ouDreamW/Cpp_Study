#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  deque<int> q_min, q_max;
  for (int i = 0; i < n; i++) {
    if (!q_min.empty() && q_min.front() <= i - k) {
      q_min.pop_front();
    }
    while (!q_min.empty() && a[i] <= a[q_min.back()]) {
      q_min.pop_back();
    }
    q_min.push_back(i);

    if (i >= k - 1) {
      // 开始输出答案
      cout << a[q_min.front()] << " ";
    }
  }
  cout << endl;

  for (int i = 0; i < n; i++) {
    if (!q_max.empty() && q_max.front() <= i - k) {
      q_max.pop_front();
    }
    while (!q_max.empty() && a[i] >= a[q_max.back()]) {
      q_max.pop_back();
    }
    q_max.push_back(i);

    if (i >= k - 1) {
      // 开始输出答案
      cout << a[q_max.front()] << " ";
    }
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