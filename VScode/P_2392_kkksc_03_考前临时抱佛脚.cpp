#include <bits/stdc++.h>
using namespace std;
#define int long long

int s1, s2, s3, s4;
int min_s = 10000000;
int left_ = 0, right_ = 0;

// int cal(vector<int> &q, int s) {
//   int a1 = q.front(), a2 = q.back();
//   int l = 1, r = (int)q.size() - 2;
//   while (l <= r) {
//     if (a1 <= a2) {
//       a1 += q[l++];
//     } else {
//       a2 += q[r--];
//     }
//   }
//   cout << max(a1, a2) << endl;
//   return max(a1, a2);
// }

void dfs(int m, const vector<int> &q, int s) {
  if (m == s) {
    min_s = min(min_s, max(left_, right_));
    return;
  }
  left_ += q[m];
  dfs(m + 1, q, s);
  left_ -= q[m];
  right_ += q[m];
  dfs(m + 1, q, s);
  right_ -= q[m];
}

void solve() {
  int min_s1, min_s2, min_s3, min_s4;
  cin >> s1 >> s2 >> s3 >> s4;
  vector<int> q1(s1), q2(s2), q3(s3), q4(s4);
  for (int i = 0; i < s1; i++)
    cin >> q1[i];
  for (int i = 0; i < s2; i++)
    cin >> q2[i];
  for (int i = 0; i < s3; i++)
    cin >> q3[i];
  for (int i = 0; i < s4; i++)
    cin >> q4[i];

  int cnt = 0;
  min_s = 10000000;
  left_ = 0, right_ = 0;
  dfs(0, q1, s1);
  cnt += min_s;

  min_s = 10000000;
  left_ = 0, right_ = 0;
  dfs(0, q2, s2);
  cnt += min_s;

  min_s = 10000000;
  left_ = 0, right_ = 0;
  dfs(0, q3, s3);
  cnt += min_s;

  min_s = 10000000;
  left_ = 0, right_ = 0;
  dfs(0, q4, s4);
  cnt += min_s;

  cout << cnt << endl;
}

signed main() {
  solve();
  return 0;
}