#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n<10){
		printf("1");
		return;
	}
	
	int temp = -1;
	while(n){
		int x = n%10;
		if(x<temp){
			printf("0");
			return;
		}else{
			temp = x;
			n/=10;
		}
	}
	printf("1");
	return;
}
