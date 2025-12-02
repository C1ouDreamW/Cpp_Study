#include <bits/stdc++.h>

using namespace std;

int getRand(int a, int b) { // 双闭
  return (rand() % (b - a + 1)) + a;
}

int main() {
  srand(time(0));
  int n = getRand(3, 10);
  cout << n << endl;
  for (int i = 0; i < n; i++) {
    cout << getRand(1, n) << " ";
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    cout << getRand(1, n) << " ";
  }
  cout << endl;
}