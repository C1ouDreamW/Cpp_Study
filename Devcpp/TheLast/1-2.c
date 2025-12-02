#include<stdio.h>

int main(){
	float s;
	int h;
	scanf("%f %d",&s,&h);
	float sum = 0;
	if(s<=3.00){
		sum += 10.00;
	}else{
		sum += 10.00;
		if(s <= 10.00){
			s-=3.00;
			sum += s*2.00;
		}
		else{
			sum+=14.00;
			s-=10.00;
			sum += s*3.00;
		}
	}
	sum+=(h/5)*2;
	printf("%.0f",sum);
	
	return 0;
}
