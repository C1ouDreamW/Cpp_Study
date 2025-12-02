#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  cout << "year=" << s.substr(0, 4) << endl;
  cout << "month=" << s.substr(4, 2) << endl;
  cout << "date=" << s.substr(6, 2) << endl;
  return 0;
}