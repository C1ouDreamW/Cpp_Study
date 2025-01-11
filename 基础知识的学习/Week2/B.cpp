#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=510;
int H,W;
bool t = false;
char a[N][N];
bool Visit[N][N];
int dx[4]={1,-1,0,0};  //  ??  ??  ??  ??
int dy[4]={0,0,-1,1};

map<char,char> p;


void dfs(int x,int y){
    if(x == H-1&&y == W-1){  // target 
        t=true;
        return;
    }
    Visit[x][y] = true;
    for(int i=0;i<4;i++){  //??????? 
        int xx,yy;
        xx=x+dx[i];
        yy=y+dy[i];
        if(a[xx][yy] == p[a[x][y]]&&!Visit[xx][yy]&&xx>=0&&yy>=0&&xx<=H-1&&yy<=W-1){  //????  ???? 
            dfs(xx,yy);
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    p['s'] = 'n';
	p['n'] = 'u';
	p['u'] = 'k';
	p['k'] = 'e';
	p['e'] = 's';
    cin >> H >> W;
    for(int i = 0;i<H;i++){
    	for(int j = 0;j<W;j++){
    		cin >> a[i][j] ;
		}
	}
	if(a[0][0] == 's'){
		if(a[H-1][W-1] == 's'||a[H-1][W-1] == 'n'||a[H-1][W-1] == 'u'||a[H-1][W-1] == 'k'||a[H-1][W-1] == 'e'){
			dfs(0,0);
		}
	}
    if(t)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
    return 0;
}
