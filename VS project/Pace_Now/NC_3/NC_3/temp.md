### C
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long

	int similar(string& a, string& b) {
		int cnt = 0;
		for (int i = 0; i < (int)a.size(); i++) {
			if (a[i] == b[i]) cnt++;
		}
		return cnt;
	}

	void solve() {
		int n, m;cin >> n >> m;
		vector<string> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int l, r;cin >> l >> r;
		sort(a.begin(), a.end());

		int cnt = 0;
		for (int i = 0; i < n - 1; i++) {
			if (similar(a[i], a[i + 1]) == 0) {
				cnt += ((int)a[i].size()) * 2;
			}
			else {

			}
		}
	}

	signed main() {
		solve();
		return 0;
	}

### E
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long

	struct node {
		int loc;
		int v;
	};

	bool cmp(node& a, node& b) {
		return a.loc < b.loc;
	}

	void solve() {
		int n; cin >> n;
		vector<node> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i].loc >> a[i].v;
		}
		sort(a.begin(), a.end(), cmp);

	}

	signed main() {
		solve();
		return 0;
	}

### F
	#include<bits/stdc++.h>
	using namespace std;

	#define int long long

	void solve() {
		vector<int> a(6);
		vector<vector<int>> ans;
		int n; cin >> n;
		int aa, bb, cc; cin >> aa >> bb >> cc;
		for (int a0 = 0; a0 <= n; a0++) {
			for (int a1 = 0; a1 <= n - a0; a1++) {
				for (int a2 = 0; a2 <= n - a0 - a1; a2++) {
					for (int a3 = 0; a3 <= n - a0 - a1 - a2; a3++) {
						for (int a4 = 0; a4 <= n - a0 - a1 - a2 - a3; a4++) {
							for (int a5 = 0; a5 <= n - a0 - a1 - a2 - a3 - a4; a5++) {
								if (a0 + a1 + a2 + a3 + a4 + a5 == n) {
									int x = a0 + a1 + a2;
									int y = a2 + a3 + a4;
									int z = a4 + a5 + a0;
									if (x == aa && y == bb && z == cc) {
										cout << "Yes" << endl;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		cout << "No" << endl;
	
	}

	signed main() {
		int t; cin >> t;
		while (t--) {
			solve();
		}
		return 0;
	}

### G
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long
	int n, k;
	priority_queue<int,vector<int>,greater<int>> a;

	void solve() {
		cin >> n >> k;
		int cut_n = n / 2;
		int cnt = 0;
		for (int i = 1; i <= n; ++i) {
			int x;
			if (i > cut_n) {
				x = n - i;
			}
			else x = n % i;
			if (a.size() < k) {
				a.push(x);
			}
			else if (!a.empty() && x > a.top()) {
				a.pop();
				a.push(x);
			}
		}
		int sum = 0;
		while (!a.empty()) {
			sum += a.top();
			a.pop();
		}
		cout << sum << endl;
	}

	signed main() {
		solve();
		return 0;
	}
### L
	#include<bits/stdc++.h>
	using namespace std;

	#define int long long
	vector<int> a1 = { 1,2,3,1 };
	vector<int> a2 = { 1,3,6,5,2,4,5,3,2,1 };
	vector<int> a3 = { 1,3,6,10,9,8,7,4,8,5,9,6,5,4,2,5,3,2,1 };
	vector<int> a4 = { 1,3,6,10,15,14,13,12,11,7,12,8,13,9,14,10,9,8,7,4,8,5,9,6,5,4,2,5,3,2,1 };
	vector<int> a5 = { 1,3,6,10,15,21,20,19,18,17,16,11,17,12,18,13,19,14,20,15,14,13,12,11,7,12,8,13,9,14,10,9,8,7,4,8,5,9,6,5,4,2,5,3,2,1 };
	vector<int> a6 = { 1,3,6,10,15,21,28,27,26,25,24,23,22,16,23,17,24,18,25,19,26,20,27,21,20,19,18,17,16,11,17,12,18,13,19,14,20,15,14,13,12,11,7,12,8,13,9,14,10,9,8,7,4,8,5,9,6,5,4,2,5,3,2,1 };
	vector<int> a7 = { 1,3,6,10,15,21,28,36,35,34,33,32,31,30,29,22,30,23,31,24,32,25,33,26,34,27,35,28,27,26,25,24,23,22,16,23,17,24,18,25,19,26,20,27,21,20,19,18,17,16,11,17,12,18,13,19,14,20,15,14,13,12,11,7,12,8,13,9,14,10,9,8,7,4,8,5,9,6,5,4,2,5,3,2,1 };

	void solve() {
		int n; cin >> n;
		cout << "Yes" << endl;
		if (n == 1) {
			for (int i = 0; i < (int)a1.size(); i++) {
				cout << a1[i] << " ";
			}
		}
		else if (n == 2) {
			for (int i = 0; i < (int)a2.size(); i++) {
				cout << a2[i] << " ";
			}
		}
		else if (n == 3) {
			for (int i = 0; i < (int)a3.size(); i++) {
				cout << a3[i] << " ";
			}
		}
		else if (n == 4) {
			for (int i = 0; i < (int)a4.size(); i++) {
				cout << a4[i] << " ";
			}
		}
		else if (n == 5) {
			for (int i = 0; i < (int)a5.size(); i++) {
				cout << a5[i] << " ";
			}
		}
		else if (n == 6) {
			for (int i = 0; i < (int)a6.size(); i++) {
				cout << a6[i] << " ";
			}
		}
		else if (n == 7) {
			for (int i = 0; i < (int)a7.size(); i++) {
				cout << a7[i] << " ";
			}
		}
	}

	signed main() {
		solve();
		return 0;
	}