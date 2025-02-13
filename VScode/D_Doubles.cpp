#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 100005;

void solve() {
  int n;
  scanf("%lld", &n);

  vector<double> val(n);
  vector<vector<double>> mian(n, vector<double>(N, 0));

  for (int i = 0; i < n; i++) {
    scanf("%lf", &val[i]);
    for (int j = 0; j < val[i]; j++) {
      double x;
      scanf("%lf", &x);
      mian[i][x]++;
    }
  }

  double max_0 = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      double sum = 0;
      for (int k = 1; k < N; k++) {
        if (mian[i][k] && mian[j][k]) {
          sum += ((mian[i][k]) / val[i]) * (mian[j][k] / val[j]);
        }
      }
      max_0 = max(max_0, sum);
    }
  }

  printf("%.15lf", max_0);
}

signed main() {
  solve();
  return 0;
}