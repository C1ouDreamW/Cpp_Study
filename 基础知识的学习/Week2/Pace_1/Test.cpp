#include<iostream>
#include<vector>

using namespace std;
#define int long long

struct {
	int start;
	int stop;
	int u = 1;
}one[100000];
int N,K;
int cnt = 0;
bool flag = false;
bool zo = false;

signed main(){
	
	cin >> N >> K;
	char S[N];
	for(int i = 0;i<=N;i++) {
		char x;
		scanf("%c",&x);
		S[i] = x;
		if(!flag){ 
			cout << 1 <<endl;
			if(x == '1'){  //起点值为 1  
				flag = true;zo = false;
				one[cnt].start = i;
				cout << 2 <<endl;
			}
		}
		else{
			if(x == '0'){  // 终点值为 0 
				if(!zo){
					cout << 3 <<endl; 
					flag = false;zo = true;
					one[cnt].stop = i;
					cnt++;
				}
			}
			else{
				cout << 4 <<endl; 
				one[cnt].u++;
			}
		}
		
	}
	for(int i = 0;i<=N;i++) printf("%c",S[i]);
	cout << endl;
	cout << cnt << endl;
	cout << one[K].u << endl;
	
	for(int i = 0;i<one[K].u;i++){
		S[one[K].start] = '0';
		S[one[K-1].stop] = '1';
	}
	
	for(int i = 0;i<=N;i++) printf("%c",S[i]);
}

