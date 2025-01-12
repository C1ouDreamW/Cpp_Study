### test
	#include<bits/stdc++.h>
	using namespace std;

	int main() {
		cout << "Hello World!" << endl;

		return 0;
	}

### A
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int n;cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	int dp[n+1] = { 0 };
	int sum_a = 0, sum_b = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum_a += a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		sum_b += b[i];
	}
	for (int i = 0; i < n; i++) {
		a[i] -= dp[i];
		int c = a[i] - b[i];
		if (c < 0) {
			dp[i + 1] = dp[i] + c;
		}
		else {

		}
		
	}
}

int main() {
	int t;cin>>t;
	while (t--) {
		solve();
	}
	return 0;
}