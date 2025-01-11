#include<bits/stdc++.h>

using namespace std;

int N;
int A[5010];  //A???
int mn = 5010, mx = 0;//mn????mx???


int min(int a, int b) {
	return a < b? a : b;
}

int solve(int i,int l) {
	int len = 1;
	if (A[l] == i) {
		return len;
	}
	len += solve(i, A[l]);
	return len;

}
int main() {
	cin >> N;
	for(int i=1;i<=N;i++) cin >> A[i];

	for (int i = 1; i <= N; i++) {
		mn = min(mn, solve(i, i));
		mx = max(mx, solve(i, i));
	}
	cout << mn << " " << mx << endl;
	return 0;
}

