#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >>n;
	if(n == 1||n == 3) cout << -1 << endl; 
	if(n==2) cout << 66 << endl;
	if(n==4) cout << 3366 << endl;
	if(n>4){
		for(int i = 0;i<n-4;i++) cout << 3;
		cout << 6366 <<endl;
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		solve();
	}
	return 0;
}
