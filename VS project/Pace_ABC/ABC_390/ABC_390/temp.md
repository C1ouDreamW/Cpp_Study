### A
	#include<bits/stdc++.h>
	using namespace std;

	void solve() {
		vector<int> a(5), b(5), c(5), d(5), e(5);
		for (int i = 0; i < 5; i++) {
			cin >> a[i];
		}
		b[0] = a[1], b[1] = a[0];
		b[2] = a[2],b[3] = a[3], b[4] = a[4];
	
		c[1] = a[2], c[2] = a[1];
		c[0] = a[0], c[3] = a[3], c[4] = a[4];

		d[2] = a[3], d[3] = a[2];
		d[0] = a[0], d[1] = a[1], d[4] = a[4];

		e[3] = a[4], e[4] = a[3];
		e[0] = a[0], e[1] = a[1], e[2] = a[2];
		bool flag2 = true, flag3 = true, flag4 = true, flag5 = true;
		for (int i = 1; i < 5; i++) {
			if (b[i] > b[i - 1]) continue;
			else {
				flag2 = false;
				break;
			}
		}
		for (int i = 1; i < 5; i++) {
			if (c[i] > c[i - 1]) continue;
			else {
				flag3 = false;
				break;
			}
		}
		for (int i = 1; i < 5; i++) {
			if (d[i] > d[i - 1]) continue;
			else {
				flag4 = false;
				break;
			}
		}
		for (int i = 1; i < 5; i++) {
			if (e[i] > e[i - 1]) continue;
			else {
				flag5 = false;
				break;
			}
		}
		if (flag2 || flag3 || flag4 || flag5) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}


	}

	int main() {
		int t;t = 1;
		while (t--) {
			solve();
		}
		return 0;
	}

### B
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long

	void solve() {
		int n;cin >> n;
		vector<double> a(n);
		bool flag = true;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (i > 0 && a[i] != a[i - 1]) {
				flag = false;
			}
		}
		if (flag) {
			cout << "Yes" << endl;
			return;
		}
		double q = a[1]/a[0];
	
		for (int i = 2; i < n; i++) {
			if (a[i-1]*q!= a[i]) {
				cout << "No" << endl;
				return;
			}
		}

		cout << "Yes" << endl;

	}

	signed main() {
		int t; t = 1;
		while (t--) {
			solve();
		}
		return 0;
	}

### C
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long

	const int N = 1010;
	int h, w;
	char a[N][N];


	void solve() {
		cin >> h >> w;
		vector<pair<int, int>> v;
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				cin >> a[i][j];
				if (a[i][j] == '#') {
					v.push_back({ i,j });
				}
			}
		}
		if ((int)v.size() == 1) {
			cout << "Yes" << endl;
			return;
		}
	
		for (int i = 1; i < (int)v.size(); i++) {
			int x1 = v[i - 1].first, y1 = v[i - 1].second;
			int x2 = v[i].first, y2 = v[i].second;
			if (x1 == x2) { //两个点在同一行
				for (int j = y1 + 1; j < y2; j++) {
					if (a[x1][j] == '.') {
						cout << "No" << endl;
						return;
					}
				}
			}
			else if (y1 == y2) { //两个点在同一列
				for (int j = x1 + 1; j < x2; j++) {
					if (a[j][y1] == '.') {
						cout << "No" << endl;
						return;
					}
				}
			}
			else { //两个点不在同一行也不在同一列
				if (y1 < y2) {
					for (int p = x1; p <= x2; p++) {
						for (int q = y1; q <= y2; q++) {
							if (a[p][q] == '.') {
								cout << "No" << endl;
								return;
							}
						}
					}
				}
				else {
					for (int p = x1; p <= x2; p++) {
						for (int q = y1; q >= y2; q--) {
							if (a[p][q] == '.') {
								cout << "No" << endl;
								return;
							}
						}
					}
				}
			}
		}

		cout << "Yes" << endl;
	}

	signed main() {
		solve();
		return 0;
	}

### D
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long

	int n;

	void solve() {
		cin >> n;
		vector<string> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
	}

	signed main() {
		solve();
		return 0;
	}