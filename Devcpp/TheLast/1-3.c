#include<stdio.h>

int a[5010];

int main(){
	int n;
	scanf("%d",&n);	
	int i,j;
	for(i = 2;i<=n;i+=2){
		a[i] = 1;
	}
	for(i = 3;i<=n;i++){
		for(j = 1;i*j<=n;j++){
			a[i*j] = !a[i*j];
		}
	}
	int cnt = 0;
	for(i = 1;i<=n;i++){
		if(!a[i]){
			printf("%d ",i);
		}
	}
	return 0;
}
