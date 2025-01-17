#include<bits/stdc++.h>
using namespace std;
const int N = 1010;
vector<vector<int>> a(N);

bool cmp(int& A, int& B) {
	for (int i = 0; i < a[A - 1].size(); i++) {
		if (a[A - 1][0] == 0 && a[A - 1].size() == 1) {
			return A > B;
		}
		if (a[A - 1][i] == B) {
			return A < B;
		}
	}
	return A >= B;
}

void solve() {
	int n; cin >> n;
	vector<string> ss(n);
	vector<int> b(n);

	for (int i = 1; i <= n; i++) {
		b[i - 1] = i;
	}
	for (int i = 0; i < n; i++) {
		cin >> ss[i];
	}
	for (int i = 0; i < n; i++) {
		bool flag = true;
		a[i].clear();
		for (int j = 0; j < n; j++) {
			if ((ss[j])[i] == '1') {
				a[i].push_back(j + 1);
				flag = false;
			}
		}
		if (flag) {
			a[i].push_back(0);
		}
	}
	sort(b.begin(), b.end(), cmp);

	for (int i = 0; i < b.size(); i++) {
		cout << b[i] << " ";

	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<vector<int>> a(N);
		solve();

	}
	return 0;
}