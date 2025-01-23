### A
    #include<bits/stdc++.h>
    using namespace std;
    #define int long long

    bool check(int x, vector<int>& a) {
	    for (int i = 0; i < a.size(); i++) {
		    if (x % a[i]== 0 || a[i] % x== 0) {
			    return false;
		    }
	    }
	    return true;
    }


    void solve() {
	    int n; cin >> n;
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) {
		    cin >> a[i];
	    }
	    sort(a.begin(), a.end());
	    //去重
	    auto it = unique(a.begin(), a.end());
	    a.resize(distance(a.begin(), it));
	    //二分
	    int l = 1, r = 1e18;
	    while (l < r) {
		    int mid = (l + r) / 2;
		    if (check(mid, a)) {
			    cout << mid << endl;
			    return;
		    }
		    else {
			    if (mid % 2 == 0) {
				    l = mid + 1;
			    }
			    else {
				    r = mid;
			    }
		    }
	    }
	    cout << -1 << endl;
    }


    signed main() {
	    int t;cin >> t;
	    while (t--) {
		    solve();
	    }
	    return 0;
    }


### B
    #include<bits/stdc++.h>
    using namespace std;
    #define int long long

    bool path(vector<vector<int>>& a, int n) {
        int x = 0;
        for (int i = 1; i <= n; ++i) {
            if (a[i].size() % 2 == 1) {
                x++;
            }
        }
        return x == 0 || x == 2;
    }

    void find(vector<vector<int>>& a, int& n, int& start, int& end) {
        for (int i = 1; i <= n; ++i) {
            if (a[i].size() % 2 == 1) {
                if (start == 0) {
                    start = i;
                }
                else {
                    end = i;
                }
            }
        }
        if (start == 0) {
            start = 1;
            end = 1;
            for (int i = 2; i <= n; ++i) {
                if (a[i].size() > 0) {
                    start = i;
                    break;
                }
            }
        }
    }

    signed main() {
        int n;
        cin >> n;
        vector<vector<int>> a(n + 1);
        for (int i = 0; i < n - 1; ++i) {
            int st, ed;
            cin >> st >> ed;
            a[st].push_back(ed);
            a[ed].push_back(st);
        }
        if (!path(a, n)) {
            cout << -1 << endl;
        }
        else {
            int start = 0, end = 0;
            find(a, n, start, end);
            cout << start << " " << end << endl;
        }
        return 0;
    }

### C
    #include<bits/stdc++.h>
    using namespace std;


    void solve() {
        int n; cin >> n;
        char a[100][100];
        vector<vector<int>> s;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        int x, y;
        int T = (n / 2) * (n / 2);
        while (T--) {
            for (int i = 0; i < (n / 2); i++) {
                for (int j = 0; j < (n / 2); j++) {
                    //找0;
                    if (a[i][j] == '0') {
                        x = i;
                        y = j;
                        bool flag1 = true;
                        //先向右搜索右边每一列中是否存在1，如果有，则保存路径到s中
                        for (int k = j + 1; k < n; k++) { //k为列
                            for (int l = x; l >= 0; l--) {  //l为行
                                if (a[l][k] == '1') {
                                    a[l][k] = '0';
                                    a[x][y] = '1';
                                    for (int m = y; m < k; m++) {
                                        s.push_back({ x,m,x,m + 1 });;
                                    }
                                    if (l < x) { //在x上面的行
                                        for (int m = x; m > l; m--) {
                                            s.push_back({ m, k,m + 1,k });
                                        }
                                    }
                                    flag1 = false;
                                    break;
                                }
                            }
                            if (!flag1) {
                                break;
                            }
                            for (int l = x; l < n; l++) {  //l为行
                                if (a[l][k] == '1') {
                                    a[l][k] = '0';
                                    a[x][y] = '1';
                                    for (int m = y; m < k; m++) {
                                        s.push_back({ x,m,x,m + 1 });
                                    }
                                    if (l > x) { //在x下面行
                                        for (int m = x; m < l; m++) {
                                            s.push_back({ m, k,m + 1,k });
                                        }
                                    }
                                    flag1 = false;
                                    break;
                                }
                            }
                            if (!flag1) {
                                break;
                            }
                        }
                        if(!flag1){
                            continue;
                        }
                        //再向下搜索下边每一行中是否存在1，如果有，则保存路径到s中
                        for (int k = i + 1; k < n; k++) { //k为行
                            for (int l = y; l >= 0; l--) {  //l为列
                                if (a[k][l] == '1') {
                                    a[k][l] = '0';
                                    a[x][y] = '1';
                                    for (int m = x; m < k; m++) {
                                        s.push_back({ m,y,m + 1,y });
                                    }
                                    if (l < y) { //在y左边列
                                        for (int m = y; m > l; m--) {
                                            s.push_back({ k,m,k,m + 1 });
                                        }
                                    }
                                    flag1 = false;
                                    break;
                                }
                            }
                            if (!flag1) {
                                break;
                            }
                            for (int l = y; l < n; l++) {  //l为列
                                if (a[k][l] == '1') {
                                    a[k][l] = '0';
                                    a[x][y] = '1';
                                    for (int m = x; m < k; m++) {
                                        s.push_back({ m,y,m + 1,y });
                                    }
                                    if (l > y) { //在y右边列
                                        for (int m = y; m < l; m++) {
                                            s.push_back({ k,m,k,m + 1 });
                                        }
                                    }
                                    flag1 = false;
                                    break;
                                }
                            }
                            if (!flag1) {
                                break;
                            }
                        }
                    }
                }
            }
            for (int i = 0; i < (n / 2); i++) {
                for (int j = 0; j < (n / 2); j++) {
                    if (a[i][j] == '0') {
                        continue;
                    }
                }
            }
            break;
        }
        //输出路径
        cout << s.size() << endl;
        for (int i = 0; i < s.size(); i++) {
            cout << s[i][0]+1 << " " << s[i][1]+1 << " " << s[i][2]+1 << " " << s[i][3]+1 << endl;
        }
        ////输出结果
        //cout << endl;
        //for (int i = 0; i < n; i++) {
        //    for (int j = 0; j < n; j++) {
        //        cout << a[i][j];
        //    }
        //    cout << endl;
        //}
    }

    int main() {
        int t; cin >> t;
        while (t--) {
            solve();
        }
    }

### D
    #include<bits/stdc++.h>
    using namespace std;
    #define int long long


    void solve() {
	    int n;cin >> n;
	    map<int,int> m;
	    for (int i = 0; i < n; i++) {
		    int x;cin >> x;
		    m[x]++;
	    }
	    if (m.size() == 2 && n % 2 == 0) {
		    if (m.begin()->second == m.rbegin()->second) {
			    cout << "Yes" << endl;
		    }
		    else {
			    cout << "No" << endl;
		    }
	    }
	    else {
		    cout << "No" << endl;
	    }
    }


    signed main() {
	    int t;cin >> t;
	    while (t--) {
		    solve();
	    }
	    return 0;
    }

### G
    #include<bits/stdc++.h>
    using namespace std;
    #define int long long

    void solve() {
        int n;cin >> n;
        vector<int> b;
        vector<bool> flag(n+1, false);

        for (int i = 1; i <= n; i++) {
            int x;cin >> x;
            if (x <= n&&x>0) {
                if (!flag[x]) {
                    flag[x] = true;
                }
                else {
                    b.push_back(x);
                }
            }
            else {
                b.push_back(x);
            }
        }

        sort(b.begin(), b.end());
        int sum_c = 0, sum_1 = 0;
        int idx = 0;
        for (int i = 1; i <= n; i++) {
            if (!flag[i]) {
                int temp = b[idx++] - i;
                sum_c += temp;
                if (temp > 0) {
                    sum_1 += temp;
                }
            }
        }
        if (sum_c == 0) {
            cout << sum_1 << endl;
        }
        else {
            cout << -1 << endl;
        }
    }

    signed main() {
        solve();
        return 0;
    }

### J
    #include<bits/stdc++.h>
    using namespace std;
    #define int long long


    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    void solve() {
        int n;cin >> n;
        map<int,int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int x;scanf("%lld", &x);
            mp[x]++;
        }
        for (map<int,int>::iterator it_1 = mp.begin(); it_1!= mp.end(); it_1++) {
            for (map<int,int>::iterator it_2 = it_1; it_2!= mp.end(); it_2++) {
                if (it_1 == it_2) continue;
                if((it_1->first % 2 == 0)&&(it_1->first == (it_2->first - 1))){
                    cnt += it_1->second * it_2->second;
                    continue;
                }
                int gcd_temp = gcd(it_1->first, it_2->first);
                if (gcd_temp == (it_1->first ^ it_2->first)) {
                    cnt += it_1->second * it_2->second;
                }
            }
        }
        cout << cnt << endl;
    }

    signed main() {
        solve();
        return 0;
    }