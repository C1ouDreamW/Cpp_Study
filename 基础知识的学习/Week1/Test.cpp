#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;
#define long long int;
typedef struct {
	int id;
	int value;
}person;


int main(){
//	vector<person> A = {94,91,83,70,60,58,45,22};
	vector<person> B;
	for(int i = 0;i<8;i++){
		int value;
		cin >> value;
		B.push_back({i+1,value});
	}
	vector<int>::iterator it = lower_bound(B.begin(),B.end(),65,greater<int>());
	
	
	
	
	
	
	
	
	cout << endl;
	return 0;
}
