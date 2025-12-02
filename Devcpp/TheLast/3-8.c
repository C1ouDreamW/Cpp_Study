#include<stdio.h>

int isprime(int a) {
	int i;
    if (a == 1)
        return 0;
    for (i = 2; i * i <= a; i++)
        if (a % i == 0)
        return 0;
    return 1;
    }

int main(){
	int prime_arr[1010];
	int idx = 0;
	int i,j;
	for(i = 1;i<1000000;i++){
		if(isprime(i)){
			prime_arr[idx++] = i;
		}
		if(idx>1000){
			break;
		}
	}
	int n;
	scanf("%d",&n);
	printf("%d",prime_arr[n-1]);
	
	return 0;
}
