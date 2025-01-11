#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
typedef long long ll;
int main(){
	ll t = 0;
	scanf("%lld",&t);
	for (int i = 0;i<t;i++){
		const int size =3*5;
		const int one_y = 11, two_y = 7;
		ll x = 0,y = 0;
		double n = 0;
		
		scanf("%lld %lld",&x,&y);
		double z = (double)x;
		if(y){
			if(y%2 == 0){//Y是偶数
				n += y/2;
				if(x > n*two_y){
					x -= n*two_y;
					n += z/size;
				}
				
			}
			else{//Y是奇数 
				n += (y+1)/2;
				if(x > ((n-1)*two_y+one_y)){
					x -= (n*(n-1)*two_y+one_y);
					n += z/size;
				}
			}
			
		}
		else{
			n = ceil(z/15);
		}
		printf("%lld",(ll)ceil(n));
	}
	
	return 0;
}
