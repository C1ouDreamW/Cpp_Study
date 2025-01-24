### A
	#include<bits/stdc++.h>
	using namespace std;

	void solve() {
		set<int> s;
		for (int i = 0; i < 7; i++) {
			int x;
			cin >> x;
			s.insert(x);
		}
		for (auto x : s) {
			if (x != 1 && x != 2 && x != 3 && x != 5 && x != 6) {
				cout << "NO" << endl;
				return;
			}
		}
		cout << "YES" << endl;
	}

	int main() {
		solve();
		return 0;
	}

### B
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long

	void solve() {
		int n;cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end(),greater<int>());
		int ans = 0;
		if (n % 2 == 0) {
			ans = a[n / 2 - 1] -1;
		}
		else {
			ans = a[n/2] -1;
		}
		cout<<ans<<endl;
	}

	signed main() {
		solve();
		return 0;
	}

### C


### D
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long

	bool check(string s, int len){
		string s1;
		for (int i = 0; i <(int)s.size()-len+1; i++) {
			s1 = s.substr(i, len);
			//向后搜索
			for (int j = i + len; j < (int)s.size(); j++) {
				if (j >= 0 && j < (int)s.size()) {
					if (s[j] == s1.back()) {
						return true;
					}
				}

			}
			//向前搜索
			for (int j = i - 1; j >= 0; j--) {
				if (j >= 0 && j < (int)s.size()) {
					if (s[j] == s1.front()) {
						return true;
					}
				}

			}
		}
		return false;
	}
	void solve() {
		int n;cin >> n;
		string s;cin >> s;
		int l = 0, r = n - 1;
		while (l < r) {
			int mid = l + r + 1 >> 1;
			if (check(s, mid)) l = mid;
			else r = mid - 1;
		}
		cout << l << endl;
	}

	signed main() {
		solve();
		return 0;
	}

### E

### F
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long

	void solve() {
		int l, r;cin >> l >> r;
		cout << r-l +1 << endl;
	}

	signed main() {
		int T;cin >> T;
		while (T--) {
			solve();
		}
		return 0;
	}

### G
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long

	void solve() {
		int n, m;cin >> n >> m;
		int temp = INT_MAX;
		int ans = 0;
		int times = 1;
		while (true) {
			int now = pow(m, times);
			int c = abs(now - n);
			if (c < temp) {
				temp = c;
				ans = times;
			}
			else {
				break;
			}
			times++;
		}

		cout << ans << endl;
	}

	signed main() {
		int T;cin >> T;
		while (T--) {
			solve();
		}
		return 0;
	}

### H


### J
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long
	void solve() {
		int n, h, m; cin >> n >> h >> m;
		set<string> ans1, ans2, ans3;
		for (int i = 0; i < n; i++) {
			string id; //大数据
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

			if (hour == 9 || hour == 20) {
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

			if ((hour >= 7 && hour < 9) || (hour >= 18 && hour < 20)) {
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


### K
	#include<bits/stdc++.h>
	using namespace std;
	#define int long long

	int a[510][510] = { 0 };
	bool flag[510][510] = { false };


	int dx[4] = { 0,0,1,-1 };
	int dy[4] = { 1,-1,0,0 };


	void solve() {
		int n, m;cin >> n >> m;
		vector<pair<int, int>> blue;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				char x;cin >> x;
				if (x == '0') {
					a[i][j] = -1;
				}
				else {
					blue.push_back({ i,j });
					a[i][j] = 1;
				}
			}
		}

		vector<pair<int, int>> temp_blue;
		vector<vector<pair<int, int>>> all;
		//找蓝色连通块
		for (int i = 0; i < blue.size(); i++) {
			temp_blue.clear();
			int x = blue[i].first;
			int y = blue[i].second;
			if (flag[x][y]) continue;
			queue<pair<int, int>> q;
			q.push({ x,y });
			flag[x][y] = true;
			temp_blue.push_back({ x,y });
			while (!q.empty()) {
				int bx = q.front().first;
				int by = q.front().second;
				q.pop();
				for (int k = 0; k < 4; k++) {
					int xx = bx + dx[k];
					int yy = by + dy[k];
					if (xx < 1 || xx > n || yy < 1 || yy > m) continue;
					if (a[xx][yy] == 1 &&!flag[xx][yy]) {
						q.push({ xx,yy });
						flag[xx][yy] = true;
						temp_blue.push_back({ xx,yy });
					}
				}
			}
			all.push_back(temp_blue);
		}

		//找-1块
		int min_cnt = 1e9;
		for (int i = 0; i < all.size(); i++) {
			bool flag2[510][510] = { false };
			int cnt = 0;
			for (int j = 0; j < all[i].size(); j++) {
				int x = all[i][j].first;
				int y = all[i][j].second;
				for (int k = 0; k < 4; k++) {
					int xx = x + dx[k];
					int yy = y + dy[k];
					if (flag2[xx][yy]) continue;
					flag2[xx][yy] = true;
					if (xx < 1 || xx > n || yy < 1 || yy > m) continue;
					if (a[xx][yy] == -1) {
						cnt++;
					}
				}
			}
			if (cnt < min_cnt) {
				min_cnt = cnt;
			}
		}
		cout << min_cnt << endl;
	}

	signed main() {
		solve();
		return 0;
	}
