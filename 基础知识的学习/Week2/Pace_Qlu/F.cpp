#include<bits/stdc++.h>

using namespace std;

string s;

int count(string s) {
	int cnt = 0;
	int i = 0;
	while (i < s.length()) {
		if (s[i] == 'E' && s[i+1] == 'n' && s[i+2] == 'g' && s[i+3] == 'l' && s[i+4] == 'i' && s[i+5] == 's' && s[i+6] == 'h') {
			cnt++;
			i += 7;
		} else {
			i++;
		}
	}
	return cnt;
}

int main() {
	//?????,????????
	getline(cin, s);
	cout << count(s) << endl;
	return 0;
}

