#include<bits/stdc++.h>
using namespace std;
#define int long long

// 1s = 1000ms
// 1min = 60s = 60000ms
// 1h = 60min = 3600s = 3600000
// 24h = 24*3600000 = 86400000

const int day = 86400000,hh = 3600000,mm = 60000,ss = 1000;

signed main(){
	int n;cin >> n;
	n%=day;
	int h = n/hh;
	n%=hh;
	int m = n/mm;
	n%=mm;
	int s = n/ss;
	if(h<10){
		cout << 0 << h << ":";
	}else{
		cout << h << ":";
	}
	if(m<10){
		cout << 0 << m << ":";
	}else{
		cout << m << ":";
	}
	if(s<10){
		cout << 0 << s << endl;
	}else{
		cout << s << endl;
	}
	
	return 0;
}
