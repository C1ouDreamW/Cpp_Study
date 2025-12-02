#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,m;
bool vt[1000010];
int ans;

void dfs(int u){
	if(u == n+1){
		int x = 0;
		for(int i = 0;i<n+m;i++){
			if(vt[i]){
				x += 2*pow(10,n+m-1-i);
			}else{
				x += 3*pow(10,n+m-1-i);
			}
		}
		if(x%2023==0){
			ans = max(ans,x);
		}
		return;
	}
	
	vt[u] = false;
	dfs(u+1);
	vt[u] = true;
	dfs(u+1);
} 
signed main(){
	cin >> n >> m;
	dfs(0);
	if(ans == 0){
		cout << -1 << endl;
	}else{
		cout << ans << endl;
	}
	
	return 0;
}
