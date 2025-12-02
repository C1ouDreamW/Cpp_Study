#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

/*
a --> b

操作: a[i] = a[i]^a[i+1]

如果选择先让a[i+1]^a[i+2],再a[i]^a[i+1]
那么a[i] --> a[i]^a[i+1]^a[i+2]

a[i]操作后的值取决于a[i+1]的原始值或已经操作过的值b[i+1]
即 a[i]取决于a[i+1]和b[i]
如果 b[i] != a[i]^a[i+1]或者a[i]^b[i+1]，则不可能转换

最后一项必须相同

从后往前推，后面的a[i]已经确定可行
*/

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  if (a == b) {
    cout << "YES" << endl;
    return;
  }
  if (a.back() != b.back()) {
    cout << "NO" << endl;
    return;
  }

  for (int i = n - 1; i >= 0; i--) {
    if (a[i] == b[i] || b[i] == (a[i] ^ a[i + 1]) ||
        b[i] == (a[i] ^ b[i + 1])) {
      continue;
    } else {
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