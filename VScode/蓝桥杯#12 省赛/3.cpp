#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	double k,b;
};

bool cmp1(node &A,node &B){
	if(A.k!=B.k){
		return A.k < B.k;
	}else{
		return A.b <= B.b;
	}
}

signed main(){
	vector<int> px,py;
	vector<node> a;
	vector<int> xx,yy;
	for(int x = 0;x<20;x++){
		for(int y = 0;y<21;y++){
			px.push_back(x);
			py.push_back(y);
		}
	}
	cout << px.size() << endl;
	for(int i = 0;i<px.size();i++){
		int x1 = px[i],y1 = py[i];
		for(int j = i+1;j<px.size();j++){
			int x2 = px[j],y2 = py[j];
			if(x1 == x2){
				xx.push_back(x1);
				continue;
			}else if(y1 == y2){
				yy.push_back(y1);
				continue;
			}
			a.push_back({((double)(y1-y2)/(double)(x1-x2)),((double)(x1*y2-x2*y1)/(double)(x1-x2))});
		}
	}
	cout << a.size() << endl;
	sort(a.begin(),a.end(),cmp1);
	sort(xx.begin(),xx.end());
	xx.erase(unique(xx.begin(),xx.end()),xx.end());
	sort(yy.begin(),yy.end());
	yy.erase(unique(yy.begin(),yy.end()),yy.end());
	vector<bool> vt(a.size());
	for(int i = 1;i<a.size();i++){
		if(a[i].k == a[i-1].k&&a[i].b == a[i-1].b){
			vt[i] = true;
		}  
	}
	
	int cnt = 0;
	for(int i = 0;i<a.size();i++){
		if(!vt[i]){
			cnt++;
		}
	}
	cout << cnt << endl;
	cout << xx.size()+yy.size() << endl;
	cout << cnt+xx.size()+yy.size() << endl;
	return 0;
}
