#include<bits/stdc++.h>

using namespace std;


const long long len = 2e5 + 10;
long long N;

struct Student {
	long long id;
	long long t, h;  //t??????????? h?????????????????
}kfc[len];

//??????????
//?kfc????,?????????????

bool cmp(Student a, Student b) {
	if(a.h*a.t == b.h*b.t) return a.id < b.id;
	return a.h * a.t < b.h * b.t;
}


signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> N;
	for (long long i = 0; i < N; i++) {
		cin >> kfc[i].t >> kfc[i].h;
		kfc[i].id = i + 1;
	}
	sort(kfc, kfc + N, cmp);

	for (long long i = 0; i < N; i++) {
		cout << kfc[i].id << " ";
	}
	cout << endl;

	return 0;
}
