#include<iostream>

using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	int A[N];
	
	
	int cnt = 1;
	int first = 1;
	while(cnt != N+1){
		if(cnt == 1){
			A[0] = cnt++;
		}
		else if(cnt == N){
			for (int k = 0;k<N;k++){
				cout << A[k];
				if(k!=N-1){
					cout << " " ;
				}
				cnt++;
			}
			break;
		}
		else{
			for(int i = (cnt + 9);i<=M;i++){
				if(i >= A[i-1]+10){
					A[cnt++] = i;
					cout << i << endl;
					break;
				}
			}
		}
	}
	cout << endl << cnt <<endl;
	
	return 0;
}
