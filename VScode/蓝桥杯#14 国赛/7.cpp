#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,k;
int a[1010][1010];
int vt[1010][1010];
int min_step = 10000000000000;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};


signed main(){
	cin >> n >> m >>k;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			char c;cin >> c;
			if(c == 'A') a[i][j] = 1;
			else a[i][j] = 2;
		}
	}
	
	queue<pair<int,int>> q;
	queue<char> step;
	q.push({1,1});
	step.push(0);
	vt[1][1] = true;
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		int this_step = step.front();
		q.pop();step.pop();
		for(int i = 0;i<4;i++){
			int xx = x+dx[i],yy = y+dy[i];
			if(a[xx][yy]&&(!vt[xx][yy])){
				if(xx == n&&yy == m){
					cout << this_step + 1 << endl;
					return 0;
				}
				if((this_step/k) % 2 == 0&&a[xx][yy] == 1){
					vt[xx][yy] = true;
					q.push({xx,yy});
					step.push(this_step+1);
				}else if((this_step/k) % 2 == 1&&a[xx][yy] == 2){
					vt[xx][yy] = true;
					q.push({xx,yy});
					step.push(this_step+1);
				}
			}
		}
	}
	cout << -1 << endl;
	
	return 0;
}
