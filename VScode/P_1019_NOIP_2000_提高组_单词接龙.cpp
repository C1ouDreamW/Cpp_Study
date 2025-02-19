#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

int n;
int max_len = 0;
vector<string> s;
vector<bool> flag(40);

int check(string word, string hh) {
  int idx = 0;
  if (word == hh) {
    for (int i = (int)word.size() - 2; i >= 0; i--) {
      string temp_1 = word.substr(0, i + 1);
      string temp_2 = hh.substr((int)hh.size() - i - 1, i + 1);
      if (temp_1 == temp_2) {
        idx = i + 1;
        break;
      }
    }
    return idx;
  }
  if (hh.size() >= word.size()) {
    for (int i = (int)word.size() - 1; i >= 0; i--) {
      string temp_1 = word.substr(0, i + 1);
      string temp_2 = hh.substr((int)hh.size() - i - 1, i + 1);
      if (temp_1 == temp_2) {
        idx = i + 1;
        break;
      }
    }
  } else {
    for (int i = (int)hh.size() - 1; i >= 0; i--) {
      string temp_1 = word.substr(0, i + 1);
      string temp_2 = hh.substr((int)hh.size() - i - 1, i + 1);
      if (temp_1 == temp_2) {
        idx = i + 1;
        break;
      }
    }
  }
  return idx;
}

void dfs(string hh) {
  for (int i = 0; i < (int)s.size(); i++) {
    if (!flag[i]) {
      int cnt = check(s[i], hh);
      if (cnt) {
        string temp = hh;
        hh += s[i].substr(cnt, s[i].size() - cnt);
        max_len = max(max_len, (int)hh.size());
        flag[i] = true;
        dfs(hh);
        flag[i] = false;
        hh = temp;
      }
    }
  }
}

void solve() {
  string head;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string x;
    cin >> x;
    s.push_back(x);
    s.push_back(x);
  }
  cin >> head;
  dfs(head);
  max_len = max(max_len, (int)head.size());
  cout << max_len << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}