#include<bits/stdc++.h>
using namespace std;
#define int long long


//动态规划
// dp(i,j)  前i个砝码是否可以称出重量j,j最大为MAX_N
// 前i-1个砝码是否可以称出重量(j-a[i])/j
int MAX_N;
bool dp[110][100000+1];
int a[110];

signed main() {
	int n;
	cin >> n;
	for(int i = 1; i<=n; i++) {
		cin >> a[i];
		MAX_N+=a[i];
	}

	dp[0][0] = true;

	for(int i = 1; i<=n; i++) {
		for(int j = 0; j<=MAX_N; j++) {
			if(dp[i-1][j]) {
				dp[i][j] = true;
			}
			if(dp[i-1][abs(j-a[i])]) {
				dp[i][j] = true;
			}
			if(dp[i-1][j+a[i]]) {
				dp[i][j] = true;
			}
		}
	}
int cnt = 0;
for(int j = 1; j<=MAX_N; j++) {
	if(dp[n][j]) {
		cnt++;
	}
}
cout << cnt << endl;
}

////暴力 50%
////一个砝码有三种状态：左、右、不放   1、2、0
//const int N = 101;
//int W[N];
//int n;
//int st[N];
//vector<int> ans;
//
//void dfs(int u){
//	if(u == n){
//		int l = 0,r = 0;
//		for(int i = 0;i<n;i++){
//			switch(st[i]){
//				case 1:
//					l+=W[i];
//					break;
//				case 2:
//					r+=W[i];
//					break;
//			}
//		}
//		int x = abs(l - r);
//		if(x){
//			ans.push_back(x);
//		}
//		return;
//	}
//
//	st[u] = 1;
//	dfs(u+1);
//	st[u] = 2;
//	dfs(u+1);
//	st[u] = 0;
//	dfs(u+1);
//}
//
//signed main(){
//	cin >> n;
//	for(int i = 0;i<n;i++){
//		cin >> W[i];
//	}
//	dfs(0);
//	sort(ans.begin(),ans.end());
//	ans.erase(unique(ans.begin(),ans.end()),ans.end());
//	cout << ans.size() << endl;
//
//	return 0;
//}
