#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int cnt = 0;
	double a,b;
	int n;cin >> a >> b >> n;
	// 一周一循环
	int once_week = a*5+b*2;
	int clc = n/once_week;
	cnt = clc*7;
	n %= once_week;
	if(n<=a*5){
		cnt = cnt + (int)ceil(n/a);
	}else{
		n-=a*5;
		cnt+=5;
		cnt+=ceil(n/b);
	}
	cout << cnt << endl;
	return 0;
}
