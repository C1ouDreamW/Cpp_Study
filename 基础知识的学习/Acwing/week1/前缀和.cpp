#include<iostream>

using namespace std;

const int N = 1e5+10;

int main(){
	int n,m;
	cin >> n >> m;
	int a[N],s[N];
	a[0] = 0;s[0] = 0;
	for(int i = 1;i<=n;i++) {
		scanf("%d",&a[i]);
		s[i] = s[i-1] + a[i];
	}
	while(m--){
		int l,r;
		cin >> l >> r;
		cout << s[r] - s[l-1] << endl;
	}
	
	
	return 0;
}
