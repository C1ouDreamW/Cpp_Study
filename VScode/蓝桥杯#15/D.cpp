#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;
string d;
int idx;

void lll(){
	int temp = 0;
	for(int i = 0;i<d.size();i++){
		if(d[i] == '.'){
			idx = i;
			continue;
		}
		int x = d[i] - '0';
		x += x;
		x += temp;
		if(x>9){
			temp = x/10;
			x =  x - temp*10;
		}else{
			temp = 0;
		}
		d[i] = x + '0';
	}
	if(temp){
		d += to_string(temp);
	}
}

signed main(){
	cin >> n >> d;
	reverse(d.begin(),d.end());
	//  d * 2^n  --  四舍五入到最近的整数 
	for(int i = 0;i<n;i++){
		lll();
	}

	if(d[idx-1] - '0'>4){
		int temp = 0;
		int x = (d[idx+1] - '0') + 1;
		if(x>9){
			temp = x/10;
			x -= 10;
			d[idx+1] = x+'0';
			int i = idx+2;
			while(temp&&i<d.size()){
				x = (d[i] - '0') + temp;
				if(x>9){
					temp = 1;
					x = 0;
					d[i] = '0';
				}else{
					temp = 0;
					d[i] = x + '0';
				}
			}
			if(temp){
				d += to_string(temp);
			}
		}else{
			d[idx+1] = x + '0';
		}
	}
	for(int i = d.size()-1;i>idx;i--){
		cout << d[i];
	}cout << endl;
	return 0;
}
