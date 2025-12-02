#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define int long long
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
// int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};

string to_bit(int n) {
  string s;
  int a, b;
  a = n % 2;
  b = n / 2;
  s.append(to_string(a));
  while (b > 1) {
    a = b % 2;
    b /= 2;
    s.append(to_string(a));
  }
  s.append(to_string(b));
  reverse(s.begin(), s.end());
  return s;
}

string to_four(int n) {
  string s;
  int a, b;
  a = n % 4;
  b = n / 4;
  s.append(to_string(a));
  while (b > 3) {
    a = b % 4;
    b /= 4;
    s.append(to_string(a));
  }
  s.append(to_string(b));
  reverse(s.begin(), s.end());
  return s;
}

void solve() {
  int cnt = 0;
  for (int i = 1; i <= 2024; i++) {
    int cnt_1 = 0, cnt_2 = 0;
    string s1 = to_bit(i);
    string s2 = to_four(i);
    for (int k = 0; k < s1.size(); k++) {
      cnt_1 += s1[k] - '0';
    }
    for (int k = 0; k < s2.size(); k++) {
      cnt_2 += s2[k] - '0';
    }
    if (cnt_1 == cnt_2) {
      cnt++;
    }
  }
  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  return 0;
}