#include <bits/stdc++.h>
using namespace std;
#define int long long

struct node {
  int id;
  int val;
};

bool cmp(node &A, node &B) { return A.id < B.id; }

void solve() {
  int n;
  cin >> n;
  vector<int> p(n + 1), q(n + 1);
  vector<node> v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> p[i];
  }
  for (int i = 1; i <= n; i++) {
    cin >> q[i];
  }

  for (int i = 1; i <= n; i++) {
    node temp;
    temp.id = q[i];
    temp.val = q[p[i]];
    v[i] = temp;
  }
  sort(v.begin() + 1, v.end(), cmp);
  for (int i = 1; i <= n; i++) {
    cout << v[i].val << " ";
  }
  cout << endl;
}

signed main() {
  solve();
  return 0;
}