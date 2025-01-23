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
				//ÅÐ¶ÏÁ½±ßÊÇ·ñÍ¬Îª×ÖÄ¸»òÍ¬ÎªÊý×Ö
				if (s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {}
				else if (s[i - 1] >= '0' && s[i - 1] <= '9' && s[i + 1] >= '0' && s[i + 1] <= '9') {}
				else {
					ans += '-';
					continue;
				}
				int cnt = s[i + 1] - s[i - 1] -1 ;
				switch (p1) {
				case 1://Ìî³äÐ¡Ð´×ÖÄ¸»òÊý×Ö
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
				case 2://Ìî³ä´óÐ´×ÖÄ¸»òÊý×Ö
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
				case 3://Ìî³äÐÇºÅ
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