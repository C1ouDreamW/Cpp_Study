#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;
int h[100010];
int ans[3];
int max_cal = 0;
bool vt[100010];

int cal(int a,int b,int c){
	return __gcd(__gcd(a,b),c);
}

void dfs(int u,int step){
	if(u == n){
		return;
	}
	if(step == 4){
		int x = cal(ans[0],ans[1],ans[2]);
		if(x > max_cal){
			max_cal = x;
		}
		return;
	}
	vt[u] = false;
	dfs(u+1,step);
	vt[u] = true;
	ans[step] = u;
	dfs(u+1,step+1);
}

signed main(){
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> h[i];
	}
	dfs(1,1);
	for(int i = 0;i<3;i++){
		cout << h[ans[i]] << " ";
	}cout << endl;
	return 0;
}
