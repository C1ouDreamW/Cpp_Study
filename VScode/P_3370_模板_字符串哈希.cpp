#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
typedef unsigned long long ULL;
const int p = 131;
vector<ULL> hashs;

void cal(string &s) {
  ULL h = 0;
  for (int i = 0; i < s.size(); i++) {
    h = h * p + s[i];
  }
  hashs.push_back(h);
}

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    cal(s);
  }
  sort(hashs.begin(), hashs.end());
  hashs.erase(unique(hashs.begin(), hashs.end()), hashs.end());
  cout << hashs.size() << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}