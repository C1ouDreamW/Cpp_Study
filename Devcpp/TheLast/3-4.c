#include<stdio.h>

int main(){
	int x;
	int cnt1 = 0,cnt2 = 0;
	while(1){
		scanf("%d",&x);
		if(x>0){
			cnt1++;
		}else if(x<0){
			cnt2++;
		}else{
			break;
		}
	}
	printf("%d\n%d",cnt1,cnt2);
	return 0;
}
