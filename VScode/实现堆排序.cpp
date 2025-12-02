#include <bits/stdc++.h>
using namespace std;
int main() {
  priority_queue<int, vector<int>, greater<int>> pq;
  int n;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    if (s == "push") {
      int x;
      cin >> x;
      pq.push(x);
    } else if (s == "remove") {
      if (pq.empty()) {
        cout << "empty" << endl;
      } else {
        pq.pop();
      }
    } else if (s == "min") {
      if (pq.empty()) {
        cout << "empty" << endl;
      } else {
        cout << pq.top() << endl;
      }
    } else if (s == "print") {
      int k;
      cin >> k;
      while (k--) {
        cout << pq.top() << " ";
        pq.pop();
      }
      cout << endl;
    }
  }
  // 请在此输入您的代码
  return 0;
}