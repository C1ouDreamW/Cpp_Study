#include<iostream>

using namespace std;

int main(){
	long long t;
	cin >> t;
	for(int i = 0;i<t;i++){
		long long a,b,c;
		cin >> a;
		cin >> b;
		cin >> c;
		if((a+b)>=10 || (a+c)>=10 || (b+c)>=10){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
