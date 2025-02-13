#include <bits/stdc++.h>
using namespace std;
#define int long long

bool bal(string &s) {
  char temp;
  int cnt_1 = 0, cnt_2 = 0;
  for (int i = 1; i < (int)s.size(); i++) {
    temp = s[i - 1];
    if (temp == '0' && s[i] == '1') {
      cnt_1++;
    } else if (temp == '1' && s[i] == '0') {
      cnt_2++;
    }
  }
  return cnt_1 == cnt_2;
}

int val(string &s) {
  int value = 0;
  for (int i = 0; i < (int)s.length(); i++) {
    string temp = s;
    if (temp[i] == '1')
      temp[i] = '0';
    else
      temp[i] = '1';
    if (bal(temp))
      value++;
  }
  return value;
}

void dfs(string s, int u, int cnt_nn, vector<int> &pos_nn, int &cnt) {
  if (u == cnt_nn) {
    cnt += val(s);
    return;
  }
  s[pos_nn[u]] = '1';
  dfs(s, u + 1, cnt_nn, pos_nn, cnt);
  s[pos_nn[u]] = '0';
  dfs(s, u + 1, cnt_nn, pos_nn, cnt);
}

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt = 0;
  int cnt_nn = 0;
  vector<int> pos_nn;
  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == '?') {
      cnt_nn++;
      pos_nn.push_back(i);
    }
  }
  dfs(s, 0, cnt_nn, pos_nn, cnt);

  cout << cnt << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}