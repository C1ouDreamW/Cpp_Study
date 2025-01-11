#include<iostream>
#include<vector>
using namespace std;

#define int long long
typedef struct{
	vector<int> collet_date;
	
}rab;

signed main(){
	int N;
	cin >> N;
	int q[N],r[N];
	for(int i = 0;i<N;i++){
		cin >> q[i] >> r[i];
	}
	int Q;
	cin >> Q;
	for(int i = 0;i<Q;i++){
		bool flag = false;
		int t,d;
		cin >> t >> d;
		rab rab_t;
		int the_size = rab_t.collet_date.size();
		for(int j = 1;j<=31;j++){
			if(j%q[t-1] == r[t-1]){
				(rab_t.collet_date).push_back(j);
			}
		}
		for(int k = 0;k<rab_t.collet_date.size();k++){
			if(d == rab_t.collet_date[k]){
				cout << d << endl;
				flag = true;
				break;
			}
		}
		if(flag){
			continue;
		}
		for(int k = 0;k<rab_t.collet_date.size();k++){
			if(d < rab_t.collet_date[k]){
				cout << rab_t.collet_date[k] << endl;
				break;
			}
			if(d > rab_t.collet_date[the_size-1]){
				cout << rab_t.collet_date[0] << endl;
				break;
			}
		}
		
	}
	return 0;
}
