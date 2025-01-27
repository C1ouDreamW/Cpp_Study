#include<bits/stdc++.h>
using namespace std;
#define int long long

struct node {
	int units;
	int cal;
	int rate;
};

bool cmp(node& A, node& B) {
	if(A.rate!= B.rate) return A.rate > B.rate;
	else return A.cal < B.cal;
}

void solve() {
	int n, x; cin >> n >> x;
	map<int, int> mp;
	vector<node> a, b, c;
	for (int i = 0; i < n; i++) {
		int xx; cin >> xx;
		node temp;
		switch (xx) {
		case 1: 
			cin >> temp.units >> temp.cal;
			temp.rate = temp.units / temp.cal;
			a.push_back(temp);
			break;
		case 2: 
			cin >> temp.units >> temp.cal;
			temp.rate = temp.units / temp.cal;
			b.push_back(temp);
			break;
		case 3: 
			cin >> temp.units >> temp.cal;
			temp.rate = temp.units / temp.cal;
			c.push_back(temp);
			break;
		}
	}
	if (a.size() == 0 || b.size() == 0 || c.size() == 0) {
		cout << 0 << endl;
		return;
	}
	sort(a.begin(), a.end(),cmp);
	sort(b.begin(), b.end(),cmp);
	sort(c.begin(), c.end(),cmp);

	//选第一批
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < a.size(); j++) {
			if(a[j].cal <= x)
		}
	}
}

signed main() {
	solve();
	return 0;
}