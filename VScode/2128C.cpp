#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
操作： 选择一个x，x>min(a)
找到比x小的从左到右第一个数，然后 a[i]+=x

进行无数次操作，能否使a变为数组b（a初始全为0）



x = b[i]/2 - 1

5 6 1 1
0 0 0 0
5
5 0 0 0
2
5 2 0 0


5 6 7 1
0 0 0 0
5
5 0 0 0
2
5 2 0 0
4
5 6 0 0
3
5 6 3 0
4
5 6 7 0
1
5 6 7 1



顺次增加
若果a[i]->b[i]期间出现a[i]>=a[i-1]，那么a[i]就不能继续增加了
a[i]>=a[i-1]
min(a[i],a[i-1]) == a[i-1],只能a[i-1]+=x;
所以在a[i]即将大于a[i-1]时，只能一步到位 += (b[i] - a[i])
因为x要大于a[i]才有可能增加，
那么上一次增加时x必须小于b[i]/2-1 才能保证下一次一步到位




*/

void solve() {
  int n;
  cin >> n;
  vector<int> b(n);
  for (int i = 0; i < n; i++)
    cin >> b[i];
  for (int i = 1; i < n - 1; i++) {
    if (b[i] < b[i + 1]) {
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
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