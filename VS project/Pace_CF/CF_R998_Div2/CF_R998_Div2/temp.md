1
4 2
5 1
6 2
4 0
7 3


#include<bits/stdc++.h>
using namespace std;
#define int long long

struct node {
	int id;
	vector<int> b;
};

bool cmp(node&aa,node&bb){
	return aa.b[0] < bb.b[0];
}

void solve() {
	int n, m;
	cin >> n >> m;
	vector<node> a;
	for (int i = 0; i < n; i++) {
		node x;
		x.id = i+1;
		for (int j = 0; j < m; j++) {
			int xx;
			cin >> xx;
			x.b.push_back(xx);
			
		}
		a.push_back(x);
		sort(a[i].b.begin(), a[i].b.end());
	}
	sort(a.begin(), a.end(),cmp);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n-1; j++) {
			if (a[j].b[i] > a[j + 1].b[i]) {
				cout << -1 << endl;
				return;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i].id << " ";
	}
	cout << endl;
}

signed main() {
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}