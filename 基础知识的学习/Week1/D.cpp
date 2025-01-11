#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0;i<t;i++){
		int n = 0;
		int win = -1;
		int max = -1;
		cin >> n;
		int a[n],b[n];
		for(int j = 0;j<n;j++){
			cin >> a[j];
			cin >> b[j];
		}

		for(int k = 0;k<n;k++){
			if(a[k]<=10 && b[k]>max){
				max = b[k];
				win = k+1;
			}
		}
		cout << win <<endl;

	}
	
	
	return 0;
}
