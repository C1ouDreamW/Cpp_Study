#include<bits/stdc++.h>
using namespace std;
#define int long long

int k;

signed main(){
	string s;cin >> s;
	int l = 0,r = 0;
	for(int i = 0;i<s.size();i++){
		if(s[i] == '('){
			l++;
		}else{
			r++;
		}
	}
	
	cout << l << " " << r << endl;
	return 0;
}
