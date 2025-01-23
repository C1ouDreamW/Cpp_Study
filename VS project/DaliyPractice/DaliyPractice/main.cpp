#include<bits/stdc++.h>
using namespace std;

int monthDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

//判断闰年
bool isL(int year) {
	if (year % 4 == 0 && year % 100!= 0) {
		return true;
	}
	else if (year % 400 == 0) {
		return true;
	}
	else {
		return false;
	}
}

//判断回文
bool isR(string s) {
	int n = s.length();
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n - 1 - i]) {
			return false;
		}
	}
	return true;
}
//判断一个八位日期是否为真实日期
bool isV(string s) {
	int year = stoi(s.substr(0, 4));
	int month = stoi(s.substr(4, 2));
	int day = stoi(s.substr(6, 2));
	if (isL(year)) {
		monthDay[1] = 29;
	}
	else monthDay[1] = 28;
	if (month < 1 || month > 12 || day < 1 || day > monthDay[month - 1]) {
		return false;
	}
}

int main() {
	string s1, s2;
	string s3;
	int cnt = 0;
	cin >> s1 >> s2;
	if (s1 == s2) {
		if (isR(s1)) {
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
		return 0;
	}
	int year1 = stoi(s1.substr(0, 4)), year2 = stoi(s2.substr(0, 4));
	int month1 = stoi(s1.substr(4, 2)), month2 = stoi(s2.substr(4, 2));
	int day1 = stoi(s1.substr(6, 2)), day2 = stoi(s2.substr(6, 2));
	if (year1 == year2) {
		s3 = s1.substr(0, 4);
		for (int i = 7; i >=4; i--) {
			s3 += s1[i];
		}
		if (isR(s3)) {
			cnt++;
		}
	}
	

	cout << cnt << endl;
	return 0;
}