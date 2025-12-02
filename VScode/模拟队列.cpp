#include <iostream>
using namespace std;
int main() {
  int m;
  cin >> m;
  queue<int> a;
  while (m--) {
    string s;
    cin >> s;
    if (s == "push") {
      int x;
      cin >> x;
      a.push(x);
    } else if (s == "pop") {
      if (!a.empty()) {
        a.pop();
      }
    } else if (s == "empty") {
      if (a.empty()) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else if (s == "query") {
      if (!a.empty()) {
        cout << a.front() << endl;
      } else {
        cout << "empty" << endl;
      }
    }
  }
  return 0;
}