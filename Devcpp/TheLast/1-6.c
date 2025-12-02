#include<stdio.h>

int n;

int main(){
	scanf("%d",&n);
	int i,j;
	
	int sum = 0;
	while(n){
		int x = n%10;
		int ccc = 1;
		for(i = 1;i<=x;i++){
			ccc*=i;
		}
		sum+=ccc;
		n/=10;
	}
	printf("%d",sum);
	return 0;
}
