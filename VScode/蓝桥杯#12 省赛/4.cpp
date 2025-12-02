#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2021041820210418;
const int n = 1010520910105209;
struct node{
	int l,w,h;
};
signed main(){
	vector<node> a;
	for(int l = 1;l<n;l++){
		for(int w = 1;w<n;w++){
			if(l*w>n) break;
			for(int h = 1;h<n;h++){
				if(l*w*h>n) break;
				if(l*w*h == n){
					a.push_back({l,w,h});
				}
			}
		}
	}
	cout << a.size() << endl;
	
	return 0;
}
