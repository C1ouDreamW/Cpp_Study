#include<iostream>

using namespace std;

typedef long long ll;

int main(){
	int t = 0;
	cin >> t;
	for(int i = 0;i<t;i++){
		ll n;
		cin >> n;
		ll a[n];
		for (ll j = 0;j<n;j++){
			cin >> a[j];
		}
		int ret = 0;
		for (ll k = 0;k<n;k++){
			if (a[k] <= k+1){
				ret = 1;
				break;
			}
		}
		if (ret){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
