#include<iostream>

using namespace std;

void flaot_(){ //浮点数二分 
	int n;
	cin >>n;
	double l = 0,r = n;
	while(r-l> 1e-8){
		double mid = (l+r)/2;
		if(mid*mid > n) r = mid;
		else l = mid;
	}
	
	cout << l << endl;;
}

void int_(int a[],int n,int k){
	//起始位置
	int l = 0,r = n-1;
	while(l<r){
		int mid = (l+r)/2;
		if(a[mid] >= k) r = mid;
		else l = mid+1;
	}
	int start = l;
	//终止位置 
	l = 0,r = n-1;
	while(l<r){
		int mid = (l+r)/2;
		if(a[mid] <= k) l = mid;
		else r = mid-1;
	}
	int end = r;
	cout << start << end << " " << endl;
	
	
}

int main(){
	
	//整数二分 
	int n,q;
	cin >> n >> q;
	int a[n];
	for(int i = 0;i<n;i++) scanf("%d",&a[i]);
	while(q--){
		int k;
		cin >> k;
		int_(a,n,k);
	}
	
	
	cout << endl;
	
	return 0;
}


