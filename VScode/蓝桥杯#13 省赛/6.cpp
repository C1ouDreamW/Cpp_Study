#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,m,k;
int a[510][510];
int s[510][510];
signed main(){
	int cnt = 0;
	cin >> n >> m >> k;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			s[i][j] = a[i][j] + s[i-1][j]+s[i][j-1]-s[i-1][j-1];
		}
	}
	// 对于左上和左下端点(i,j),(p,q)。矩阵(i,j,p,q)
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			for(int p = i;p<=n;p++){
				for(int q = j;q<=m;q++){
					int x = s[p][q] - s[i-1][q] - s[p][j-1] + s[i-1][j-1];
					if(x<=k){
						cnt++;
					}
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
