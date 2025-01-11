#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;
#define int long long

signed main(){
	int N,M;
	cin >> N >> M;
	vector<int> A,ID;
	int min = 2e10,value = 0;
	for(int i = 0;i<N;i++){  //¿ÚÎ¶°´½µÐòÅÅÁÐ 
		cin >> value;
		if(value < min){
			A.push_back(value);
			min = value;
			ID.push_back(i+1);
		}
	}
	
	for(int i = 0;i<M;i++){
		int b;
		cin >> b; 
		vector<int>::iterator it = lower_bound(A.begin(),A.end(),b,greater<int>());
		if(it != A.end()){
			cout << ID[distance(A.begin(),it)] << endl;
		}
		else{
			cout << -1 <<endl;
		}
	}
	

	return 0;
}

