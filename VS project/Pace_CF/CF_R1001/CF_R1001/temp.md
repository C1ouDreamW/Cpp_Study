### B
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long
	const int N = 1e6 + 5;
	int a[N];

	void solve() {
		int n;cin >> n;
		int max_val = 0;
		for (int i = 0; i < n; i++) {
			int x;cin >> x;
			max_val = max(max_val, x);
			x -= 1;
			int y = x / 2;
			if (i - y >= 0) {
				a[i - y]++;
			}
			else a[0]++;
			if (i + y < n) {
				a[i + y]--;
			}
			else a[n - 1]--;
		}

		for (int i = 1; i <= n; i++) {
			a[i] = a[i - 1] + a[i];
			if (a[i] < n) {
				cout << "No" << endl;
				return;
			}
		}

		cout << "Yes" << endl;
	}

	signed main() {
		int t;cin >> t;
		while (t--) {
			solve();
		}
		return 0;
	}