### NC16644
	#include<bits/stdc++.h>
	using namespace std;

	int main() {
		int p1, p2, p3;
		cin >> p1 >> p2 >> p3;
		string ans;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			int temp = p2;
			if (s[i] == '-') {
				if (s[i-1] >= s[i + 1]) {
					ans+='-';
					continue;
				}
				else if (s[i - 1] == s[i + 1] - 1) {
					continue;
				}
				//判断两边是否同为字母或同为数字
				if (s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {}
				else if (s[i - 1] >= '0' && s[i - 1] <= '9' && s[i + 1] >= '0' && s[i + 1] <= '9') {}
				else {
					ans += '-';
					continue;
				}
				int cnt = s[i + 1] - s[i - 1] -1 ;
				switch (p1) {
				case 1://填充小写字母或数字
					if (p3 == 2) {
						for (int j = cnt - 1; j >= 0; j--) {
							int temp = p2;
							while (temp--) {
								ans += s[i - 1] + j + 1;
							}
						}
					}
					else {
						for (int j = 0; j < cnt; j++) {
							int temp = p2;
							while (temp--) {
								ans += s[i - 1] + j + 1;
							}
						}
					}

					break;
				case 2://填充大写字母或数字
					if (s[i - 1] >= 'a' && s[i - 1] <= 'z') {
						if (p3 == 2) {
							for (int j = cnt - 1; j >= 0; j--) {
								int temp = p2;
								while (temp--) {
									ans += s[i - 1] + j + 1 - 32;
								}
							}
						}
						else {
							for (int j = 0; j < cnt; j++) {
								int temp = p2;
								while (temp--) {
									ans += s[i - 1] + j + 1 - 32;
								}
							}
						}

					}
					else {
						if (p3 == 2) {
							for (int j = cnt - 1; j >= 0; j--) {
								int temp = p2;
								while (temp--) {
									ans += s[i - 1] + j + 1;
								}
							}
						}
						else {
							for (int j = 0; j < cnt; j++) {
								int temp = p2;
								while (temp--) {
									ans += s[i - 1] + j + 1;
								}
							}
						}
					}
					break;
				case 3://填充星号
					for (int j = 0; j < cnt; j++) {
						int temp = p2;
						while(temp--) {
							ans += '*';
						}
					}
					break;
				}
			}
			else {
				ans += s[i];
			}
		}
		cout << ans << endl;

		return 0;
	}

### NC16622
	#include<bits/stdc++.h>
	using namespace std;
	int main() {
		int n; cin >> n;
		string s;
		for (int i = n; i >= 0; i--) {
			int x;cin >> x;
			if (x == 0) {
				continue;
			}
			else if (x > 0) {
				s+= "+";
			}
			else {
				s += "-";
			}
			if (abs(x) == 1 && i != 0) {}
			else s += to_string(abs(x));
			if (i > 1) {
				s += "x^";
				s += to_string(i);
			}
			else if (i == 1) {
				s += "x";
			}
		}
		if (s[0] == '+') {
			s = s.substr(1);
		}
		cout << s << endl;

		return 0;
	}

### NC16589
	#include<bits/stdc++.h>
	using namespace std;
	int main() {
		int m, n;
		cin >> m >> n;
		int mmm = 0;
		int cnt = 0;
		deque<int> dq;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		for (int i = 0; i < n; i++) {
			bool flag = true;
			for (auto it = dq.begin(); it != dq.end(); it++) {
				if (*it == v[i]) {
					flag = false;
					break;
				}
			}
			if (flag) {
				cnt++;
				dq.push_back(v[i]);
				if (dq.size() > m) {
					dq.pop_front();
				}
			}
		}
		cout << cnt << endl;
		return 0;
	}

### NC16593
	#include<bits/stdc++.h>
	using namespace std;
	struct node {
		int a, b, g, k;
	};

	int main() {
		int n;cin >> n;
		vector<node> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].a >> v[i].b >> v[i].g >> v[i].k;
		}
		int xx, yy;
		cin >> xx >> yy;
		for (auto it = v.end() - 1; it >= v.begin(); it--) {
			if (((it->a) <= xx) && ((it->a + it->g) >= xx) && ((it->b) <= yy) && ((it->b + it->k) >= yy)) {
				cout << distance(v.begin(), it) + 1 << endl;
				return 0;
			}
		}

		return 0;
	}

### NC16593
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
			return true;
		}

		//判断一个日期是否在两个日期之间
		bool isS(string s, string s1, string s2) {
			int year = stoi(s.substr(0, 4));
			int year1 = stoi(s1.substr(0, 4));
			int year2 = stoi(s2.substr(0, 4));
			int month = stoi(s.substr(4, 2));
			int month1 = stoi(s1.substr(4, 2));
			int month2 = stoi(s2.substr(4, 2));
			int day = stoi(s.substr(6, 2));
			int day1 = stoi(s1.substr(6, 2));
			int day2 = stoi(s2.substr(6, 2));
			if ((year == year1) && (year == year2)) {
				if (!(year >= year1 && year <= year2)) return false;
				if (!(month >= month1 && month <= month2)) return false;
				if (!(day >= day1 && day <= day2)) return false;
			}
			else if (year == year1) {
				if (!(month > month1)) return false;
				else if (month == month1) return (day >= day1);
			}
			else if (year == year2) {
				if (!(month < month2)) return false;
				else if (month == month2) return (day <= day1);
			}
			else if ((year > year1) && (year < year2)) {
				return true;
			}
			else return false;
			return true;
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
			for (int i = year1; i <= year2; i++) {
				string s3 = to_string(i);
				reverse(s3.begin(), s3.end());
				string s4 = to_string(i) + s3;
				if (isV(s4) && isS(s4, s1, s2)) cnt++;
			}
	

			cout << cnt << endl;
			return 0;
		}

### NC16649
	#include<bits/stdc++.h>
	using namespace std;

	struct node{
		int st, ed;
	};

	bool cmp(node& A, node& B) {
		if (A.st != B.st) return A.st < B.st;
		else return A.ed > B.ed;
	}

	void solve() {
		int l, m; cin >> l >> m;
		vector<node> v(m);
		for (int i = 0; i < m; i++) {
			cin >> v[i].st >> v[i].ed;
		}
		sort(v.begin(), v.end(), cmp);
		int sum = 0;
		int start = v[0].st, end = v[0].ed;
		for (int i = 1; i < (int)v.size(); i++) {
			if (v[i].st == start) {
				continue;
			}
			else {
				if (v[i].ed < end) continue;
				else {
					if (v[i].st <= end) {
						end = v[i].ed;
					}
					else {
						sum += end - start + 1;
						start = v[i].st;
						end = v[i].ed;
					}
				}
			}
		}
		sum += end - start + 1;
		cout << l - sum +1 << endl;
	}

	int main() {
		solve();
		return 0;
	}