#include<bits/stdc++.h>
using namespace std;

// 记录所有 1 的位置
// 遍历 1 的位置，若 1 合法，找联通块 
// 对于 1 ，顺着 海找外海，若能到达外海(9)，则不是子岛屿，若不能，则是子岛屿，不记录 

int vt[55][55];
int a[55][55];
bool st[55][55];
int m,n;
int dx4[4] = {-1,1,0,0},dy4[4] = {0,0,-1,1};
int dx8[8] = {-1,1,0,0,-1,-1,1,1},dy8[8] = {0,0,-1,1,-1,1,-1,1};
int id = 1;
bool flag = false;

void dfs_link(int x,int y,int idd){
	for(int i = 0;i<4;i++){
		int xx = x+dx4[i],yy = y+dy4[i];
		if(xx>=1&&xx<=n&&yy>=1&&yy<=m){
			if(!vt[xx][yy]&&a[xx][yy]){
				vt[xx][yy] = idd;
				dfs_link(xx,yy,idd);
			}
		}
	}
}

void dfs_find(int x,int y,int idd){
	for(int i = 0;i<8;i++){
		if(flag){
			return;
		}
		int xx = x+dx8[i],yy = y+dy8[i];
		if(xx>=0&&xx<=n+1&&yy>=0&&yy<=m+1){
			if(a[xx][yy] == -1){  // 到外海了 
				flag = true;
				return;
			}else{
				if((!a[xx][yy]) || vt[xx][yy] == idd){
					if(!st[xx][yy]){
						st[xx][yy] = true;
						dfs_find(xx,yy,idd);
						st[xx][yy] = false;
					}
				}
			}
		}
	}
}

void solve(){
	vector<pair<int,int>> mud(300); int idx = 0;
	cin >> n >> m;
	int cnt = 0;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			char c;cin >> c;
			if(c == '1'){
				a[i][j] = 1;
			}else{
				a[i][j] = 0;
			}
			if(a[i][j]){
				mud[idx++] = {i,j};
			}
		}
	}
	
	for(int i = 0;i<idx;i++){
		flag = false;
		int x = mud[i].first;
		int y = mud[i].second;
		if(!vt[x][y]){
			vt[x][y] = id;
			dfs_link(x,y,id);
			dfs_find(x,y,id++);
			if(flag){
				cnt++;
			}
		}
	}
	
	cout << cnt << endl;
}

signed main(){
	int t;cin >> t;
	while(t--){
		id = 1;
		for(int i = 0;i<55;i++){
			for(int j = 0;j<55;j++){
				vt[i][j] = 0;
				a[i][j] = -1;
			}
		}
		solve();
	}
	return 0;
}
