#include<iostream>

using namespace std;
#define int long long
int quike_sort(int a[],int l,int r){
	int x = a[l],i = l-1,j = r+1;
	if(l>=r){
		return 0;
	}
	
	while(i<j){
		do {i++ ;} while(a[i]<x);
		do {j-- ;} while(a[j]>x);
		if(i<j) swap(a[i],a[j]);
	}
	quike_sort(a,l,j);
	quike_sort(a,j+1,r);
	return 0;
}
signed main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i<n;i++) scanf("%d",&a[i]);
	quike_sort(a,0,n-1);
	for(int i = 0;i<n;i++) printf("%d ",a[i]);
	
	
	return 0;
}
