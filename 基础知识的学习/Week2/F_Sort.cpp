#include<iostream>
using namespace std;
typedef long long ll;
typedef struct {
	ll s;
	int e;
}player;


ll judge(player *a,int n,const player M,int max_e,ll max_s);
void body();

int main(){
	int t;
	cin >> t;
	while(t--){
		body();
	}
	
	
	return 0;
}

void body(){
	int n;
	int max_e;
	ll max_s; 
	cin >> n;
	player a[n-1];
	player M;
	cin >>  M.s >> M.e;
	for (int i = 0;i<n-1;i++){
		cin >> a[i].s >> a[i].e;
		if(a[i].s >= M.s){  // Find max_e
			if(a[i].e > max_e){
				max_e = a[i].e;
			}
			max_s = a[i].s; //Find max_s
		}
	}
	cout << judge(a,n-1,M,max_e,max_s) << endl;
}


ll judge(player *a,int n,const player M,int max_e,ll max_s){ //n is len of a[]
	int w = M.s;
	//1.靠耐力取胜
	if(M.e > max_e){
		return w;
	}

	//2.靠力量取胜
	if(M.s > max_s){
		return w;
	}
	return -1;
}
