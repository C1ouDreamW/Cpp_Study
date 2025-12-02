#include<stdio.h>

int main(){
	int n;scanf("%d",&n);
	if(n == 1){
		printf("Ace");
	}else if(n == 11){
		printf("Jack");
	}else if(n == 12){
		printf("Queen");
	}else if(n == 13){
		printf("King");
	}else if(n>13){
		printf("Error");
	}else{
		printf("%d",n);
	}
	return 0;
}
