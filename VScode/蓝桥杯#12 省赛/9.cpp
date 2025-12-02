#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;

signed main(){
	cin >> n >> m;
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++){
		a[i] = i;
	}
	while(m--){
		int p,q;cin >> p >> q;
		if(p){  //ÉýÐò 
			sort(a.begin()+q,a.end());
		}else{  //½µÐò 
			sort(a.begin()+1,a.begin()+q+1,greater<int>());
		}
	}
	for(int i = 1;i<=n;i++){
		cout << a[i] << " ";
	}cout << endl;
	return 0;
}
