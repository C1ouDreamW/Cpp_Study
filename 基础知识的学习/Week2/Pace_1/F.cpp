#include<iostream>
#include<algorithm>
#include<cmath> 
using namespace std;
#define int long long
int n,m;

signed main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int a[n],b[m],c[n];
		for(int i = 0;i<n;i++) cin >> a[i];
		for(int i = 0;i<m;i++) cin >> b[i];
		sort(a,a+n);
		sort(b,b+m,greater<int>());
		int sum = 0;
		int cnt = 0;
		int ap,bp,aq,bq;
		ap = 0;
		bp = 0;
		aq = n-1;
		bq = m-1;
		while(cnt<n){
			if(abs(a[ap]-b[bp])>=abs(a[aq]-b[bq])){
				sum+=abs(a[ap]-b[bp]);
				ap++;
				bp++;
				cnt++;
			}
			else{
				sum+=abs(a[aq]-b[bq]);
				aq--;
				bq--;
				cnt++;
			}
		}
		cout << sum << endl;
	}
}
