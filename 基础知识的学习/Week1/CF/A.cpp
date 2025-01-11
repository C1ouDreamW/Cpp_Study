#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b ;
		int m = 0;
		if(a >= b){
			m = b;
		}
		else{
			m = a;
		}
		while(1){
			if(m%a == m%b){
				cout << m << endl;
				break;
			}
			m++;
		}
	}
	return 0;
}
