#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
Tom先选
1.在有苹果的箱子里拿一个苹果
2.当没苹果可选的时候，输掉比赛
3.选择之后，如果所有箱子中的max-min > k，则也输掉比赛

如果没有第三种规则的话，sum为偶数时Tom必输，反之则必赢

c = (max-min)
max减小 -- c减小
min减小 -- c增大

若某时刻 (max-min) > k
则为了不输，必须考虑减小c -- 减小max -> 理想情况下为 max-1 -- c-1
所以当 (max-min) > k+1时，或最大值大于1时，必输
*/

void solve() {
  int n, k;
  cin >> n >> k;
  int sum = 0;
  vector<int> a(n);
  int max_val = 0, min_val = INT_MAX;
  int cnt_max = 1;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    min_val = min(a[i], min_val);
    if (a[i] > max_val) {
      cnt_max = 1;
      max_val = a[i];
    } else if (a[i] == max_val) {
      cnt_max++;
    }
  }
  if (max_val - min_val > k + 1) {
    cout << "Jerry" << endl;
    return;
  } else if (max_val - min_val > k && cnt_max > 1) {
    cout << "Jerry" << endl;
    return;
  } else {
    if (sum % 2 == 0) {
      cout << "Jerry" << endl;
    } else
      cout << "Tom" << endl;
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