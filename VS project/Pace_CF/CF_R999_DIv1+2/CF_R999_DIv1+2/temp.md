### A
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long

	void solve() {
		int n; cin >> n;
		vector<int> a, b;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			if (x % 2 == 0) {
				a.push_back(x);
			}
			else {
				b.push_back(x);
			}
		}
		int s = 0;
		int cnt = 0;
		if (!a.empty()) {
			cnt += 1;
		}
		else {
			cnt -= 1;
		}
		cnt += (int)b.size();

		cout << cnt << endl;
	}

	signed main() {
		int t; cin >> t;
		while (t--) {
			solve();
		}
		return 0;
	}