#include<iostream>

using namespace std;

int n;

int temp[15];
bool is[15];  //bool数组未初始化时，表现为全False 

void find_all(int u){
	if(u == n){
		for(int i = 0;i<n;i++) {
			cout << "    " <<  temp[i] ;
		}
		printf("\n"); 
		return;
	}
	for(int i = 1;i<=n;i++){
		if(!is[i]){
			is[i] = true;
			temp[u] = i;
			find_all(u+1);
			is[i] = false;
		}
	}
}

int main(){
	cin >> n;
	find_all(0);

	return 0;
}

