#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int k;cin >> k;
	string s;cin >> s;
	char c1,c2;cin >> c1 >> c2;
	int cnt_c1 = 0;
	int cnt = 0;
	int i = 0;
	for(int j = k-1;i<s.size();i++,j++){
		if(s[i] == c1){
			cnt_c1++;
		}
		if(s[j] == c2){
			cnt+=cnt_c1;
		}
	}
	cout << cnt << endl;
	return 0;
}
