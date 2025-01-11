#include<iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	char S[N];
	cin >> S;
	int T = 0,A = 0;
	
	if(N%2 == 0){
		int win = N/2;
		for(int i = 0;i<N;i++){
			if(S[i] == 'T'){
				T++;
			}
			else{
				A++;
			}
			if(T == win){
				cout << "T" <<endl;
				break;
			}
			else if(A == win){
				cout << "A" <<endl;
				break;
			}
		}
	}
	else{
		for(int i = 0;i<N;i++){
			if(S[i] == 'T'){
				T++;
			}
			else{
				A++;
			}
		}
		if(T>A){
			cout << "T" <<endl;
		}
		else{
			cout << "A" <<endl;
		}
	}

	return 0;
} 
