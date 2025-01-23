#include<bits/stdc++.h>
using namespace std;

int find(vector<int>& a, int l, int r) {
    int n = a.size();
    vector<int> save;
    // 枚举所有子集
    for (int p = 0; p < (1 << n); ++p) {
        vector<int> s;
        for (int i = 0; i < n; ++i) {
            if (p & (1 << i)) {
                s.push_back(a[i]);
            }
        }
        reverse(s.begin(), s.end());
        vector<int> b = a;
        int idx = 0;
        for (int i = 0; i < n; ++i) {
            if (p & (1 << i)) {
                b[i] = s[idx++];
            }
        }
        int sum = 0;
        for (int i = l - 1; i < r; ++i) {
            sum += b[i];
        }
        save.push_back(sum);
    }
    return *min_element(save.begin(), save.end());
}

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int result = find(a, l, r);
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}