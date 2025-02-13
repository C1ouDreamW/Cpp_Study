#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;

  while (n--) {
    string a;
    cin >> a;
    int num = a.size();
    char x;
    int ans = 0;
    for (int i = num - 2; i >= 0; i--) {
      x = a[i];
      if (x == a[i + 1]) {
        ans = 1;
        cout << 1 << endl;
        break;
      }
    }
    if (ans == 0)
      cout << num << endl;
  }
  return 0;
}