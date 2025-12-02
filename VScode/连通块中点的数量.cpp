#include <iostream>
using namespace std;

const int N = 100010;

int father[N]; // 如果值为0，则为根节点
int counts[N];

// int find(int a) {
//   int fa = a;
//   while (father[fa] != fa) {
//     fa = father[fa];
//   }
//   return fa;
// }

int find(int a) { // 路径压缩
  if (a != father[a])
    father[a] = find(father[a]);

  return father[a];
}

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    counts[i] = 1;
    father[i] = i;
  }
  while (m--) {
    string s;
    cin >> s;
    if (s == "C") {
      int a, b;
      cin >> a >> b;
      int aa = find(a);
      int bb = find(b);
      if (aa != bb) {
        counts[aa] += counts[bb];
        father[bb] = a;
      }
    } else if (s == "Q1") {
      int a, b;
      cin >> a >> b;
      if (a == b) {
        cout << "Yes" << endl;
      } else {
        if (find(a) == find(b)) {
          cout << "Yes" << endl;
        } else {
          cout << "No" << endl;
        }
      }
    } else if (s == "Q2") {
      int a;
      cin >> a;
      cout << counts[find(a)] << endl;
    }
  }
  return 0;
}