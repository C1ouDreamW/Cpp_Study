#include<bits/stdc++.h>
using namespace std;
#define int long long

// ¶þ·Ö´ð°¸
 
const int N = 10010;
int n;
int A[N],B[N];

bool check_max(int v){
	for(int i = 0;i<n;i++){
		int b = A[i]/v;
		if(b<B[i]){
			return false;
		}
	}
	return true;
}

int find_max(){
	int ans = 0;
	int l = 0,r = INT_MAX;
	while(l<r){
		int mid = (l+r)>>1;
		if(check_max(mid)){
			ans = mid;
			l = mid + 1;
		}else{
			r = mid;
		}
	}
	return ans;
}

bool check_min(int v){
	for(int i = 0;i<n;i++){
		int b = A[i]/v;
		if(b>B[i]){
			return false;
		}
	}
	return true;
}

int find_min(){
	int ans = 0;
	int l = 0,r = INT_MAX;
	while(l<r){
		int mid = (l+r)>>1;
		if(check_min(mid)){
			ans = mid;
			r = mid - 1;
		}else{
			l = mid;
		}
	}
	return ans;
}

signed main(){
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> A[i] >> B[i];
	}
	cout << find_min() << " " << find_max() << endl;
	
	return 0;
}
