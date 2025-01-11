#include<iostream>

using namespace std;
#define long long int;
int main() {
	int N,M; //N个人 M个寿司 
	
	
	cin >> N >> M;
	int A[N],B[M];
	for (int i = 0;i<N;i++){
		cin >> A[i];
	}
	for (int i = 0;i<M;i++){
		cin >> B[i];
	}
	int eated[M];
	for(int i = 0;i<M;i++){
		eated[i] = -1;
	}
	
	for (int i = 0;i< M;i++){
		for (int j = 0;j<N;j++){
			if(B[i] >= A[j]){
				eated[i] = j+1;
				B[i] = -1;
				break;
			}
		}
		
	}
	for(int k = 0;k<M;k++){
		cout << eated[k] << endl;
	}
	
	return 0;

}
