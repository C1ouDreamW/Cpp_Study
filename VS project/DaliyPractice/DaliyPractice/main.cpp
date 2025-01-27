#include<bits/stdc++.h>
using namespace std;

struct node {
	int val;
	int id;
};

bool cmp(node& A, node& B) {
	if (A.val != B.val) return A.val < B.val;
	else return A.id < B.id;
}

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	vector<node> v(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		v[i].id = i;
		v[i].val = a[i];
	}
	sort(v.begin(), v.end(),cmp);
	int max_val = v.back().val;
	int min_val = (v.front().val) * 2;
	int c = max_val - min_val;
	int l = v.front().id, r = v.front().id;
	if (l == r) {
		cout << abs(v[l].val * 2 - v[r+1].val * 2) << endl;
		return;
	}

	for (int i = 1; i < (int)v.size(); i++) {
		min_val = min(min_val, v[i].val * 2);
		while (l > v[i].id) {
			l--;
			max_val = max(max_val, (v[i].val) * 2);
		}
		while (r < v[i].id) {
			r++;
			max_val = max(max_val, (v[i].val) * 2);
		}
		c = min(c, max_val - min_val);
	}


	cout << c << endl;
}

int main() {
	int t; t = 1;
	while (t--) {
		solve();
	}
	return 0;
}