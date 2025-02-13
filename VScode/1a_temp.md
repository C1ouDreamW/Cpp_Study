#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arrays(n, vector<int>(m));
    vector<long long> sums(n, 0);
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> arrays[i][j];
        sums[i] += arrays[i][j];
      }
    }
    vector<int> ind(n);
    for (int i = 0; i < n; ++i) {
      ind[i] = i;
    }
    sort(ind.begin(), ind.end(),
         [&](int a, int b) { return sums[a] > sums[b]; });
    long long score = 0;
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
      int idx = ind[i];
      for (int j = 0; j < m; ++j) {
        sum += arrays[idx][j];
        score += sum;
      }
    }
    cout << score << endl;
  }
  return 0;
}