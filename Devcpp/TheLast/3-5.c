#include<stdio.h>


int main(){
	int n;
	scanf("%d",&n);
	if(n%2 == 0){
		n--;
	}
	int sum = 0;
	int i,j;
	for(i = 1;i<=n;i+=2){
		int x = 1;
		for(j = 1;j<=i;j++){
			x*=j;
		}
		sum+=x;
	}
	
	printf("%d",sum);
	return 0;
}
