#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 15;
int n,T[N],D[N],L[N];
bool vt[N];
bool flag = false;

void dfs(int u,int time){
	if(flag) return;
	if(u == n){
		flag = true;
		return;
	}
	
	for(int i = 0;i<n;i++){
		if(vt[i]||D[i]+T[i]<time){
			continue;
		}
		vt[i] = true;
		dfs(u+1,max(T[i],time)+L[i]);
		vt[i] = false;
	}
}

void solve(){
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> T[i] >> D[i] >> L[i];
	}
	dfs(0,0);
	if(flag){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

signed main(){
	int t;cin >> t;
	while(t--){
		for(int i = 0;i<N;i++){
			vt[i] = false;
		}
		flag = false;
		solve();
	}
	return 0;
}
