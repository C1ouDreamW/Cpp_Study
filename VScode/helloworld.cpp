#include <iostream>
using namespace std;
int main() {
  string s = "hello world";
  for (int i = 0; s[i]; i++) {
    s[i]++;
  }
  cout << s << endl;
  return 0;
}