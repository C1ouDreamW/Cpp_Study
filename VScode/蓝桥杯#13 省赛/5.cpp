#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 100010;
int n,len_a,len_b;
int xx[N];
int s_a[N],s_b[N];
vector<int> val_a(N),val_b(N);
int idx_a,idx_b;

int ksm(int a,int b){
	int res = 1;
	while(b){
		if(b&1 == 1){
			res *= a;
		}
		a = a*a;
		b >>= 1;
	}
	return res;
}

int trans_a(){
	int res = 0;
	for(int i = 0;i<len_a;i++){
		res += s_a[i] * ksm(xx[i],i);
	}
	return res;
}
int trans_b(){
	int res = 0;
	for(int i = 0;i<len_b;i++){
		res += s_b[i] * ksm(xx[i],i);
	}
	return res;
}
void dfs_a(int u){
	if(u == len_a){
		val_a[idx_a++] = trans_a();
		val_b[idx_b++] = trans_b();
		return;
	}
	for(int i = 2;i<=n;i++){
		// i½øÖÆ
		xx[u] = i;
		dfs_a(u+1);
	}
	
}

signed main(){
	cin >> n;
	cin >> len_a;
	for(int i = 0;i<len_a;i++){
		cin >> s_a[i];
	}
	cin >> len_b;
	for(int i = 0;i<len_b;i++){
		cin >> s_b[i];
	}
	dfs_a(0);
	int min_a = INT_MAX,min_b = 0;
	for(int i = 0;i<val_a.size();i++){
		min_a = min(min_a,val_a[i]);
	}
	for(int i = 0;i<val_b.size();i++){
		min_b = max(min_b,val_b[i]);
	}
	cout << min_a - min_b << endl;
	return 0;
}
