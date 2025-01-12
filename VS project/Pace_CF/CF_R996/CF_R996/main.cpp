#include<bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N][N];
void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}