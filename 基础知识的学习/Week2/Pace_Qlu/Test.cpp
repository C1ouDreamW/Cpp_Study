#include<bits/stdc++.h>

using namespace std;

const int N = 1010;
int n;
int a[N], b[N], c[N];
int max_score = 0;
//??N????,??????:??i???????????a[i]?,?i???????????b[i]?
//???i?????????????????????,???c[i]?,??????2*c[i]?

//?????
void dfs(int step, int cur_score, int last_color) {
	if (step == n) {
		max_score = max(max_score, cur_score);
		return;
	}
	for (int i = 0; i < 2; i++) {
		int color = i ^ last_color;
		int next_score = cur_score + (i == 0? a[step] : b[step]);
		if (step > 0 && (i == 0? a[step - 1] : b[step - 1]) == color) {
			next_score += (i == 0? c[step] : c[step]) * (i == 0? 1 : -1);
		}
		dfs(step + 1, next_score, color);
	}
}






int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) cin >> c[i];
	dfs(0, 0, 0);
	cout << max_score << endl;
	return 0;
}


