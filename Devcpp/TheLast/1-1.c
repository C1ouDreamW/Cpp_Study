#include<stdio.h>

int main(){
	int m,n;
	int sum = 0;
	scanf("%d %d",&m,&n);
	int i,j;
	for(i = 0;i<m;i++){
		for(j = 0;j<n;j++){
			int x;
			scanf("%d",&x);
			if(i == 0||i == m-1){
				sum+=x;
			}
			else if(j == 0||j == n-1){
				sum+=x;
			}
		}
	}
	
	printf("%d",sum);
	return 0;
}
