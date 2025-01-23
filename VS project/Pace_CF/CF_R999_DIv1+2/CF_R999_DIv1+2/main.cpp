#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	map<int, int> m;
	;int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x; scanf("%lld",&x);
		m[x]++;
	}
	int cnt = 0,sss = 0;
	map<int, int>::iterator itsss = m.end();

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		if (it->second >= 4) {
			cout << it->first << " " << it->first << " " << it->first << " " << it->first << endl;
			return;
		}
		else if (it->second >= 2) {
			cnt++;
			itsss = it;
			if (cnt == 2) {
				cout << sss << " " << sss << " " << it->first << " " << it->first << endl;
				return;
			}
			sss = it->first;
		}
	}
	if (itsss == m.end()) {
		cout << -1 << endl;
		return;
	}
	int side = itsss->first;
	////只有一个三
	if (itsss->second == 3) {
		int top = itsss->first;
		for (map<int, int>::iterator it_1 = m.begin(); it_1 != m.end(); it_1++) {
			if (it_1 != itsss) {
				int down = it_1->first;
				if (top > down) {
					swap(top, down);
				}
				if ((down - top) < side * 2) {
					cout << top << " " << down << " " << side << " " << side << endl;
					return;
				}
				if (down >= top + side * 2) {
					break;
				}
			}
		}
	}

	
	///只有一个对
	if (itsss->second == 2) {
		for (map<int, int>::iterator it_1 = m.begin(); it_1 != m.end(); it_1++) {
			if (it_1 != itsss) {
				int top = it_1->first;
				for (map<int, int>::iterator it_2 = it_1; it_2 != m.end(); it_2++) {
					if (it_2 != itsss&&it_2!=it_1) {
						int down = it_2->first;
						if ((down - top) < side * 2) {
							cout << top << " " << down << " " << side << " " << side << endl;
							return;
						}
						if (down >= top + side * 2) {
							break;
						}
					}
					
				}
			}

		}
	}


	cout << -1 << endl;
	return;
}

signed main() {
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}