#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  int x;
  cin >> x;
  auto it = lower_bound(a.begin(), a.end(), x);
  a.insert(it, x);
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  cout << endl;
  return 0;
}