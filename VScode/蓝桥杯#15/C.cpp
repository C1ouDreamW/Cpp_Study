#include<iostream>

using namespace std;

bool isGod(int n){
	string s = to_string(n);
	int idx = 1;
	for(int i = (int)s.size()-1;i>=0;i--){
		if(idx%2==0){
			if((s[i] - '0')%2!=0){
				return false;
			}
		}else{
			if((s[i] - '0')%2==0){
				return false;
			}	
		}
		idx++;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 1;i<=n;i++){
		if(isGod(i)) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
