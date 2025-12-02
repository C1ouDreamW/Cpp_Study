#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,m;
signed main(){
	cin >> n >> m;
	vector<int> mid(n);
	for(int i = 0;i<n;i++){
		int l,r;cin >> l >> r;
		mid[i] = (l+r)>>1;
	}
	sort(mid.begin(),mid.end());
	for(int i = 0;i<m;i++){
		int L,R;cin >> L >> R;
		auto it_l = lower_bound(mid.begin(),mid.end(),L);
		auto it_r = lower_bound(mid.begin(),mid.end(),R);
		if(it_l == mid.end()){
			cout << 0 << endl;
		}else if(it_r == mid.end()){
			cout << n - distance(mid.begin(),it_l) << endl;
		}else{
			cout << distance(it_l,it_r)+1 << endl;
		}
		
	}
	
	return 0;
}
