#include <iostream>
using namespace std;
typedef long long ll;

int main(){
	ll t = 0;
	cin >> t;
	for (int i = 0;i<t;i++){
		const int size =3*5;
		const int size_y = 4, size_x = 1;
		ll x = 0,y = 0;
		ll cnt = 0,free = 0;
		cin >> x;
		cin >> y;
		
		cnt += (y+1)/2;
		free = cnt*size - y*size_y;
		
		if(x>free){
			cnt += ( (x-free) + size -1 ) / size;
			cout << cnt <<endl;
		}
		else{
			cout << cnt <<endl;
		}
	}		
		
	
	return 0;
}
