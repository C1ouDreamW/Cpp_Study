#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  long long ans = -1;
  for (int k = 0; k < 4; ++k) {
    long long current_pn_cost = k;
    vector<int> current_orientations(n);

    for (int i = 0; i < n; ++i) {
      current_orientations[i] = (a[i] + k) % 4;
    }

    long long min_m_for_this_k = -1;

    for (int r_m_mod_4 = 0; r_m_mod_4 < 4; ++r_m_mod_4) {
      long long S_r = 0;
      for (int i = 0; i < n; ++i) {
        S_r += (current_orientations[i] + r_m_mod_4) % 4;
      }

      if (S_r % 4 == r_m_mod_4) {
        long long candidate_m = S_r;
        if (min_m_for_this_k == -1 || candidate_m < min_m_for_this_k) {
          min_m_for_this_k = candidate_m;
        }
      }
    }

    if (min_m_for_this_k != -1) {
      long long total_ops_for_k = current_pn_cost + min_m_for_this_k;
      if (ans == -1 || total_ops_for_k < ans) {
        ans = total_ops_for_k;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
