#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;

	int item = 0;
	int loc = 0;
	for (int i = (int)s.size() - 1; i >= 0; i--) {
		if (s[i] == '.') {
			item = 1;
			loc = i;
			break;
		}
		if (s[i] == '/') {
			item = 2;
			loc = i;
			break;
		}
		if (s[i] == '%') {
			item = 3;
			loc = i;
			break;
		}
	}

	if (item == 0) {
		int idx = (int)s.size() - 1;
		for (int i = (int)s.size() - 1; i >= 0; i--) {
			if (s[i] == '0') idx--;
			else break;
		}
		if (idx == -1) {
			cout << 0 << endl;
			return ;
		}
		for (int i = idx; i >= 0; i--) {
			cout << s[i] ;
		}
		cout << endl;
		return;
	}
	else if (item == 1) {
		//整数部分
		int idx = loc - 1;
		for (int i = loc - 1; i >= 0; i--) {
			if (s[i] == '0') idx--;
			else break;
		}
		if (idx == -1) {
			cout << 0 ;
		}
		if (idx != -1) {
			for (int i = idx; i >= 0; i--) {
				cout << s[i] ;
			}
		}
		cout << "." ;
		//小数部分
		idx = loc + 1 ;
		for (int i = loc + 1; i < (int)s.size() - 1; i++) {
			if (s[i] == '0') idx++;
			else break;
		}
		if (idx == (int)s.size()) {
			cout << 0 << endl;
			return;
		}
		for (int i = (int)s.size() - 1; i >= idx; i--) {
			cout << s[i] ;
		}
		cout << endl;
		return;

	}
	else if (item == 2) {
		//分子部分
		int idx = loc - 1;
		for (int i = loc - 1; i >= 0; i--) {
			if (s[i] == '0') idx--;
			else break;
		}
		if (idx == -1) {
			cout << 0 ;
		}
		if (idx != -1) {
			for (int i = idx; i >= 0; i--) {
				cout << s[i] ;
			}
		}
		cout << "/" ;
		//分母部分
		idx = (int)s.size() - 1;
		for (int i = (int)s.size() - 1 ; i > loc; i--) {
			if (s[i] == '0') idx--;
			else break;
		}
		for (int i = idx; i > loc; i--) {
			cout << s[i];
		}
		cout << endl;
		return;

	}
	else if (item == 3) {
		int idx = (int)s.size() - 2;
		for (int i = (int)s.size() - 2; i >= 0; i--) {
			if (s[i] == '0') idx--;
			else break;
		}
		if (idx == -1) {
			cout << 0 << "%" << endl;
			return ;
		}
		for (int i = idx; i >= 0; i--) {
			cout << s[i] ;
		}
		cout << "%" << endl;
		return;
	}
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		solve();
	}
	return 0;
}