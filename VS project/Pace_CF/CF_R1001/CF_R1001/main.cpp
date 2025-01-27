#include<bits/stdc++.h>
using namespace std;

int sum_arr(vector<int>& a) {
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i];
	}
	return sum;
}

void solve() {
	int n;cin >> n;
	vector<int> a(n);
	vector<int> ans;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> b(a);
	int len_a = (int)a.size();
	ans.push_back(sum_arr(a));
	while (len_a > 1) {
		ans.push_back(a.back() - a[0]);
		ans.push_back(a[0] - a.back());
		for (int i = 1; i < len_a; i++) {
			a[i] -= a[i - 1];
		}
		len_a--;
	}
	int len_b = (int)b.size();
	while (len_b > 1) {
		b.reserve(len_b);
		ans.push_back(a.back() - a[0]);
		ans.push_back(a[0] - a.back());
		for (int i = 1; i < len_b; i++) {
			b[i] -= b[i - 1];
		}
		len_b--;
	}

	sort(ans.begin(), ans.end());
	cout << ans.back() << endl;
}

int main() {
	int t;cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}