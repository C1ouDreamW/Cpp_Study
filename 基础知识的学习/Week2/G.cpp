#include<iostream>
#include<cstring>

using namespace std;

#define int long long

void solve(){
	int n;
	cin >> n;
	int a[n],b[n]; //A??,B?? 
	int charge[n][n]; 
	int min_a = 1e9+10,min_b = 1e9+10;
	for(int i = 0;i<n;i++){
		cin >> a[i];
		if(a[i] < min_a) min_a = a[i];
	}
	for(int i = 0;i<n;i++){
		cin >> b[i];
		if(b[i] < min_b) min_b = b[i];
	}
	
	int cost_a = 0,cost_b = 0;
	//????
	for(int i = 0;i<n;i++) cost_a+=(min_b+a[i]);
	//???? 
	for(int i = 0;i<n;i++) cost_b+=(min_a+b[i]);
	
	cout << min(cost_a,cost_b) << endl;
}

signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


