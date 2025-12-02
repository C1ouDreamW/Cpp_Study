#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
假设Alice胜利 --> 红色大于蓝色
Bob选择之后，
1.蓝色0增加max(数组)
2,蓝色0增加max(红色)，红色sum减少max(红色)

所以Alice选择时必须遵循 红色sum > max(max(数组),max(红色)*2)

设a<b<c
从低到高遍历b和c
a+b+c = 红色sum
a > max(max_v,c*2)-b-c;
二分找最小的a
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int max_v = a.back();
  int cnt = 0;
  for (int i = n - 1; i >= 0; i--) {
    for (int j = i - 1; j >= 0; j--) {
      auto it = upper_bound(a.begin(), a.begin() + j,
                            max(max_v, a[i] * 2) - a[i] - a[j]);
      cnt += (j - distance(a.begin(), it));
    }
  }
  cout << cnt << endl;
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