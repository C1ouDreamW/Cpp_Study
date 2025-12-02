#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  string ans = "";
  while (cin >> s) {
    if (s[0] >= 'A' && s[0] <= 'Z')
      ans += s[0];
    else
      ans += (s[0] + ('A' - 'a'));
  }
  cout << ans << endl;
  return 0;
}