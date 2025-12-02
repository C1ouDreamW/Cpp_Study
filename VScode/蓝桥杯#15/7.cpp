#include<bits/stdc++.h>
using namespace std;
#define int long long

//±©Á¦
int ans[1010],a[1010];
vector<int> s1(1010),s2(1010);
int n;
int min_c = INT_MAX;
int idx = 0;

signed main(){
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
	}
	for(int i = 1;i<=n;i++){
		s1[i] = s1[i-1] + a[i];
	}
	for(int i = n;i>0;i--){
		s2[n-i+1] = s2[n-i] + a[i];
	}
	reverse(s2.begin()+1,s2.begin()+n+1);
//	for(int i = 1;i<=n;i++){
//		cout << s2[i] << " ";
//	}cout << endl;
	for(int i = 1;i<n;i++){
		int c = abs(s1[i]-s2[i+1]);
		min_c = min(c,min_c);
	}
	cout << min_c << endl;
} 

//signed main(){
//	int n;cin >> n;
//	vector<int> a(n);
//	for(int i = 0;i<n;i++){
//		cin >> a[i];
//	}
//	int sum_0 = 0,sum_1 = 0;
//	sort(a.begin(),a.end());
//
//	cout << abs(sum_0-sum_1) << endl;
//	return 0;
//}
