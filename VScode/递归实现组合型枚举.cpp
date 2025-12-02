#include <iostream>
using namespace std;
int n, m;

int vt[30];

void dfs(int u, int step) {
  if (step == m) {
    for (int i = 1; i <= n; i++) {
      if (vt[i]) {
        cout << i << " ";
      }
    }
    cout << endl;
    return;
  }

  for (int i = u; i <= n; i++) {
    if (!vt[i]) {
      vt[i] = true;
      dfs(i + 1, step + 1);
      vt[i] = false;
    }
  }
}

int main() {
  cin >> n >> m;
  dfs(1, 0);
  return 0;
}