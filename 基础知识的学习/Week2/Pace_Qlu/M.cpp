#include<bits/stdc++.h>

using namespace std;
const int N = 5;
int n;
char world[N][N];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 }; 
bool visited[N][N];
int min_o = 0;

void dfs(int x, int y, int cnt) {
	if (x < 0 || x >= n || y < 0 || y >= n || world[x][y] == 'x' || visited[x][y]) return;
	visited[x][y] = true;
	if (world[x][y] == 't') {
		min_o = max(min_o, cnt);
		return;
	}
	for (int i = 0; i < 4; i++) {
		dfs(x + dx[i], y + dy[i], cnt + 1);
	}
}
//'.'???,'x'???,'s'???,'t'???
//???????????,???s?t???



int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> world[i][j];
		}
	}
	dfs(0, 0, 0);
	cout << min_o << endl;
	return 0;
}

