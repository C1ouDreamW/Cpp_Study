#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
	vector<int> res(4);
	res[0] = 1476%9;
	res[1] = (1476/9)%9;
	res[2] = (1476/81)%9;
	res[3] = (1476/729);
	cout << res[0] << " " << res[1] << " " << res[2] << " " << res[3] << endl;
	return 0;
}
