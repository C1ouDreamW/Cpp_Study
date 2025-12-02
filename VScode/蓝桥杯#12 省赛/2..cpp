#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;

int check(int ans){
	int res = ans;
	int a = 1;
	for(int i = 2;i<=ans;i++){
		a *= i;
		if(a>=n){
			return res+a;
		}
	}
	res += a;
	return res;
}


signed main(){
	cin >> n;
	int l = 0,r = INT_MAX;
	int ans = 0;
	while(l<=r){
		int mid = (l+r)>>1;
		if(check(mid)>=n){
			ans = mid;
			r = mid-1;
		}else{
			l  =mid+1;
		}
	}
	cout << ans << endl;
	
	return 0;
}
