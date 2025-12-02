#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

const int N = 1e6;
int son[N][26];
int flag[1000000];
int idx = 0; // idx作为一个单词在flag里的位置

void insert(string s) {
  int p = 0;
  for (int i = 0; i < s.size(); i++) {
    int ch = s[i] - 'A';
    if (!son[p][ch]) {
      son[p][ch] = ++idx;
    }
    p = son[p][ch];
  }
  flag[p]++;
}

int query(string s) {
  int p = 0;
  for (int i = 0; i < s.size(); i++) {
    int ch = s[i] - 'A';
    if (!son[p][ch]) {
      return 0;
    }
    p = son[p][ch];
  }

  return flag[p];
}

void solve() {
  string s;
  int n;
  while (cin >> s) {
    insert(s);
  }
  cout << idx + 1 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}