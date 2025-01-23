//牛客算法竞赛第二场
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
	int n, h, m;cin >> n >> h >> m;
	set<int> ans1, ans2, ans3;
	for (int i = 0; i < n; i++) {
		int id;
		string date, time;
		cin >> id >> date >> time;
		int year = stoi(date.substr(0, 4));
		if (year != h) {
			continue;
		}
		int month = stoi(date.substr(5, 2));
		if (month != m) {
			continue;
		}
		int day = stoi(date.substr(8, 2));
		int hour = stoi(time.substr(0, 2));
		int minute = stoi(time.substr(3, 2));
		int second = stoi(time.substr(6, 2));

		if (hour == 10 || hour == 20) {
			if (minute == 0 && second == 0) {
				ans1.insert(id);
			}
		}
		else if (hour == 13) {
			if (minute == 0 && second == 0) {
				ans2.insert(id);
			}
		}
		else if (hour == 1) {
			if (minute == 0 && second == 0) {
				ans3.insert(id);
			}
		}

		if ((hour >= 7 && hour < 10) || (hour >= 18 && hour < 20)) {
			ans1.insert(id);
		}
		else if (hour >= 11 && hour < 13) {
			ans2.insert(id);
		}
		else if (hour >= 22 || hour < 1) {
			ans3.insert(id);
		}
	}
	cout << ans1.size() << " " << ans2.size() << " " << ans3.size() << endl;
}

signed main() {
	solve();
	return 0;
}

