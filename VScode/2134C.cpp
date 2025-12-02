#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
good -- 数组的每个子数组的 sum偶数位 >= sum奇数位 位置索引为原数组索引

一次操作：选择一个元素减少1（非负）

最小次数使得a变good

每次操作只减少奇数位的当前最大值

任意一个区间内，sum_1>=sum_2

sum_1 - sum_2 >=0
a[2]+a[4]+... -a[1]-a[3]-... >=0
-a[1]+a[2]-a[3]+a[4] .. >=0

设区间[l,r]
l为奇数,r为奇数
-a[l]+a[l+1]-a[l+2]+....+a[r-1]-a[r] >=0 时，l,r为好区间

若l为奇数
sum_1-sum_2 = b[l-1] - b[r] >=0 --> b[l-1] >= b[r]
偶数
sum_1-sum_2 = b[r]-b[l-1] --> b[l-1] <= b[r]

若l为奇数时b[l-1]>=b[r]成立，那么l+=1时也同样为good

所以只需保证对于任意一个r，b[r]>=b[l-1]，（l<=r-1）
--> b[r]>=(b[r-2],b[r-3]...)
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 2), b(n + 2), pre_min(n + 2, 0);
  int sum_1 = 0, sum_2 = 0;
  priority_queue<int> pq;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int ans = 0, cost = 0;
  for (int i = 2; i <= n + 1; i++) {
    if (i % 2 == 0) {
      b[i] = b[i - 1] + a[i - 1];
    } else {
      b[i] = b[i - 1] - a[i - 1];
    }

    if (i > 2) {
      if (b[i] > pre_min[i - 2]) {
        cost = b[i] - pre_min[i - 2];
        ans += cost;

        int max_v = pq.top();
        pq.pop();
        pq.push(max_v - cost);
        b[i] -= cost;
      }
    }
    pre_min[i] = min(pre_min[i - 1], b[i]);

    if (i % 2 == 0) {
      pq.push(a[i - 1]);
    }
  }

  cout << ans << endl;
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