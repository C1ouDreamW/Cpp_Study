#include<stdio.h>

struct node{
	char name[1000];
	float a,b,c;
	float d;
}a[1000];

int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i = 0;i<n;i++){
		scanf("%s %f %f %f",a[i].name,&a[i].a,&a[i].b,&a[i].c);
		a[i].d = a[i].a+a[i].b-a[i].c;
	}
	for(i = 0;i<n;i++){
		printf("%s %.2f\n",a[i].name,a[i].d);
	}
	
	return 0;
}
