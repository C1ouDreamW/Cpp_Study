### A
	#include<bits/stdc++.h>
	using namespace std;
 
	void solve() {
		int n, m;
		cin >> n >> m;
		vector<int> xx(n,0), yy(n,0);
		for (int i = 0; i < n; i++) {
			cin >> xx[i] >> yy[i];
		}
		int x = xx[0], y = yy[0];
		int temp_x = x, temp_y = y;
		int c = 4*m;
		for (int i = 1; i < n; i++) {
			c += 4 * m;
			x += xx[i];
			y += yy[i];
			c -= ((temp_x + m) - x)*2;
			c -= ((temp_y + m) - y)*2;
			temp_x = x;
			temp_y = y;
		}
		cout << c << endl;
 
	}
 
	int main() {
		int t;
		cin >> t;
		while (t--) {
			solve();
		}
		return 0;
	}


### B
    #include<bits/stdc++.h>
    using namespace std;
    const int N = 1010;
    vector<vector<int>> a(N);

    bool cmp(int& A, int& B) {
        for (int i = 0; i < a[A - 1].size(); i++) {
            if (a[A - 1][0] == 0&&a[A-1].size() == 1) {
                return A > B;
            }
            if (a[A - 1][i] == B) {
                return A < B;
            }
        }
        return A >= B;
    }

    void solve() {
        int n; cin >> n;
        vector<string> ss(n);
        vector<int> b(n);

        for (int i = 1; i <= n; i++) {
            b[i - 1] = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> ss[i];
        }
        for (int i = 0; i < n; i++) {
            bool flag = true;
            a[i].clear();
            for (int j = 0; j < n; j++) {
                if ((ss[j])[i] == '1') {
                    a[i].push_back(j + 1);
                    flag = false;
                }
            }
            if (flag) {
                a[i].push_back(0);
            }
        }
        sort(b.begin(), b.end(), cmp);

        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";

        }
        cout << endl;
    }

    int main() {
        int t;
        cin >> t;
        while (t--) {
            vector<vector<int>> a(N);
            solve();

        }
        return 0;
    }
