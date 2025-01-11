#include<iostream>

using namespace std;
const int N = 1000010;
int temp[N];

void merge_sort(int a[],int l,int r){
	if(l>=r) return ;
	int mid = (l+r)/2;
	merge_sort(a,l,mid),merge_sort(a,mid+1,r);
	
	int i = l,j = mid+1,cnt = 0;
	while(i<=mid && j<=r){
		if(a[i] <= a[j]) temp[cnt++] = a[i++];
		else temp[cnt++] = a[j++];
	}
	while(i<=mid){
		temp[cnt++] = a[i++];
	}
	while(j<=r){
		temp[cnt++] = a[j++];
	}
	for(i = l,j = 0;i<=r;i++,j++) a[i] = temp[j]; //lÊÇÅÅÐò×ó¶Ëµã 
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i<n;i++) scanf("%d",&a[i]);
	merge_sort(a,0,n-1);
	for(int i = 0;i<n;i++) printf("%d ",a[i]);
	
	
	return 0;
}
