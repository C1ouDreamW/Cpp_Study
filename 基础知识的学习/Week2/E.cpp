#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i<n;i++) cin >> a[i];
	int p = 0,q = n-1;
	int min_a = 1,max_a = n;
	bool flag = a[p]!=max_a&&a[p]!=min_a&&a[q]!=max_a&&a[q]!=min_a;
	while(p<q){
		if(a[p] == min_a){
			p++;
			min_a++;
		}
		if(a[p] == max_a){
			p++;
			max_a--;
		}
		if(a[q] == min_a){
			q--;
			min_a++;
		}
		if(a[q] == max_a){
			q--;
			max_a--;
		}
		flag = a[p]!=max_a&&a[p]!=min_a&&a[q]!=max_a&&a[q]!=min_a;
		if(flag) break;
	}
	if(flag) cout << p+1 << " " << q+1 <<endl;
	else cout << -1 << endl;
	return;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
