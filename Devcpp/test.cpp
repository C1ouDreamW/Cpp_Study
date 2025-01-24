#include<bits/stdc++.h>
using namespace std;
const int N = 510;
int n,m;
int x2 = 0, y2 = 0;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

char a[N][N];
bool flag[N][N];
bool isWin = false;

bool dfs(int x, int y) {
	if (x == x2 && y == y2) {
		isWin = true;
		return true;
	}
	if (isWin) return;
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (a[xx][yy] == '#') continue;
		if (!flag[xx][yy]) {
			flag[xx][yy] = true;
			dfs(xx,yy);
			flag[xx][yy] = false;
		}
		if (isWin) return;
	}
}

int main() {
	while (cin >> n >> m) {
		int x1 = 0, y1 = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
				if (a[i][j] == 'S') {
					x1 = i;
					y1 = j;
				}
				else if (a[i][j] == 'E') {
					x2 = i;
					y2 = j;
				}
			}
		}
		if (isWin) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
