#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int s,t; //????s  ????t 
	int H,W;
	cin >> H >> W;
	char A[H][W],B[H][W];
	for(int i = 0;i<H;i++){
		for(int j = 0;j<W;j++){
			cin >> A[i][j];
		}
	}
	for(int i = 0;i<H;i++){
		for(int j = 0;j<W;j++){
			cin >> B[i][j];
		}
	}
	
	for(s=0;s<H;s++){
		for(t=0;t<W;t++){
			//??????A? 
			int ret = 1;
			for(int i = 0;i<H;i++){
				for(int j = 0;j<W;j++){
					if(A[(i-s+H)%H][(j-t+W)%W] != B[i][j] ){
						ret = 0;
						break;
					}
				}
				if(!ret){
					break;
				}
			}
			if(ret){
				cout << "Yes" <<endl;
				return 0;
			}	
		}
	}
	cout << "No" <<endl;
	
	return 0;
}
