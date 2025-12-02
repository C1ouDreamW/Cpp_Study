#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

// 线性时间复杂度

vector<string> s;

bool cmp(string &a, string &b) { return a + b < b + a; }

int n;
void solve() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    string x;
    cin >> x;
    s.push_back(x);
  }
  sort(s.begin(), s.end(), cmp);
  for (int i = 0; i < n; i++) {
    cout << s[i];
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