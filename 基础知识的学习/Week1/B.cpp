#include<iostream>

using namespace std;

typedef long long ll;

int main(){
	int t = 0;
	cin >> t;
	for(int i = 0;i<t;i++){
		ll n,k,x;
		cin >> n >> k >> x;
		ll max_sum = n*k - (k*(k - 1))/2;
		ll min_sum = k*(k + 1)/2;
		if (x < min_sum || x > max_sum) {
            cout << "NO" << endl;
        } 
		else {
            cout << "YES" << endl;
        }
	}
	
	return 0;
}
