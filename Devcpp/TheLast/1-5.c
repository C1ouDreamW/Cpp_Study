#include<stdio.h>

struct node{
	int idx,score,count;
	float ar;
}a[5000];

int n;
float r;

void sort(){
	int i,j;
	for(i = 0;i<n;i++){
		for(j = i+1;j<n;j++){
			if(a[i].ar>a[j].ar){
				float temp = a[j].ar;
				a[j].ar = a[i].ar;
				a[i].ar = temp;
			}
		}
	}
}

int main(){
	int i,j;
	scanf("%d %f",&n,&r);
	float x = n*r;
	int xx = (int)x;
	int cnt = xx;
	if((x - xx)>=0.0001){
		cnt++;
	}
	
	for(i = 0;i<n;i++){
		int sc,co;
		scanf("%d %d",&sc,&co);
		a[i].idx = i+1;
		a[i].score = sc;
		a[i].count = co;
		a[i].ar = (float)sc/(float)co;
	}
	
	sort();
	
	for(i = 0;i<cnt;i++){
		printf("%d %d %d %.2f\n",a[i].idx,a[i].score,a[i].count,a[i].ar);
	}
	return 0;
}
