#include<bits/stdc++.h>

using namespace std;
int x, y;


int main() {
	cin >> x >> y;
	double ans = x * (1 / 3.00000) * y;
	//?????,???xiaoshu
	if(ans!= int(ans)) {
		cout << "xiaoshu" << endl;
		return 0;
	}
	cout << int(ans) << endl;
	
	return 0;
}

