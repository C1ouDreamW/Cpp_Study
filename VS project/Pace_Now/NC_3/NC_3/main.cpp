#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
priority_queue<int, vector<int>, greater<int>> a;

void solve() {
	cin >> n >> k;
	ll cut_n = n / 2;
	for (ll i = 1; i <= n; ++i) {
		int x;
		if (i > cut_n) {
			x = n - i;
		}
		else x = n % i;
		if ((int)a.size() < k) {
			a.push(x);
		}
		else if (!a.empty() && x > a.top()) {
			a.pop();
			a.push(x);
		}
	}
	ll sum = 0;
	while (!a.empty()) {
		sum += a.top();
		a.pop();
	}
	cout << sum << endl;
}

int main() {
	solve();
	return 0;
}