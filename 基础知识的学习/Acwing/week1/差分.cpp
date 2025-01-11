#include<iostream>

using namespace std;
const int N = 1e5+10;

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int b[N] = {0};
	int temp;
	for (int i = 1;i<=n;i++) {
		scanf("%d",&temp);
		b[i] += temp;b[i+1] -= temp;
	}
	
	while(m--){
		int l,r,c;
		scanf("%d%d%d",&l,&r,&c);
		b[l] += c;b[r+1] -= c;
	}
	for(int i = 1;i<=n;i++){
		b[i] += b[i-1];
		cout << b[i] << " " ;
	}
	
	cout << endl;
	
	return 0;
}
