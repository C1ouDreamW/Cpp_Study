#include<stdio.h>

int main(){
	int sum1 = 0,sum2 = 0;
	int n;
	scanf("%d",&n);
	int i,j;
	int x;
	for(i = 1;i<=n;i++){
		for(j = 1;j<=n;j++){
			scanf("%d",&x);
			if(j-i>=0){
				sum1+=x;
			}
			if(j-i<=0){
				sum2+=x;
			}
		}
	}
	printf("%d %d",sum1,sum2);
	return 0;
}
