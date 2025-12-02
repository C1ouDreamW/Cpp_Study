#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,k;
signed main(){
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	while(k--){
		int min_idx,min_val = INT_MAX;
		for(int i = 0;i<n;i++){
			if(a[i]!=-1){
				if(a[i]<min_val){
					min_idx = i;
					min_val = a[i];
				}
			}
		}
		for(int i = min_idx+1;i<n;i++){
			if(a[i]!=-1){
				a[i]+=min_val;
				break;
			}
		}
		for(int i = min_idx-1;i>=0;i--){
			if(a[i]!=-1){
				a[i]+=min_val;
				break;
			}
		}
		a[min_idx] = -1;
	}
	for(int i = 0;i<n;i++){
		if(a[i] == -1){
			continue;
		}
		cout << a[i] << " ";
	}cout << endl;
	return 0;
}
