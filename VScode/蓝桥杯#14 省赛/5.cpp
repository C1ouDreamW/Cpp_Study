#include<bits/stdc++.h>
using namespace std;
#define int long long

// 找最长接龙序列 

signed main(){
	int n;cin >> n;
	vector<string> a(n);
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	int max_len = 0;
	for(int i = 0;i<n;i++){ //以i开头的序列 
		int tail = a[i].back();
		int len = 1;
		for(int j = i+1;j<n;j++){
			if(a[j][0] == tail){
				tail = a[j].back();
				len++;
			}
		}
		max_len = max(max_len,len);
	}
	cout << n - max_len << endl;
	
	return 0;
}
