#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
	vector<int> a,idxs;
	vector<string> date;
	for(int i = 0;i<100;i++){
		int x;cin >> x;
		a.push_back(x);
	}
	for(int i = 0;i<100;i++){
		if(a[i] == 2){
			for(int j = i+1;j<100;j++){
				if(a[j] == 0){
					for(int p = j+1;p<100;p++){
						if(a[p] == 2){
							for(int q = p+1;q<100;q++){
								if(a[q] == 3){
									if(q<96){
										idxs.push_back(q+1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	sort(idxs.begin(),idxs.end());
	idxs.erase(unique(idxs.begin(),idxs.end()),idxs.end());
	// 59 60 65
	
	for(int i = 60;i<100;i++){
		if(a[i] == 0){  //先找月份小于10的
			for(int j = i+1;j<100;j++){
				if(a[j] == 0){
					continue;
				}
				for(int p = j+1;p<100;p++){
					if(a[p] == 0){  //先找日份小于10的
						for(int q = p+1;q<100;q++){
							if(a[p] == 0){
								continue;
							}
							string s = "0";
							s += to_string(a[j]);
							s+= "0";
							s+= to_string(a[q]);
							date.push_back(s);
						}
					}else if(a[p] <=3 ){  //日份大于10的
						
						for(int q = p+1;q<100;q++){
							if(a[q] <= 1){
								string s = "0";
								s += to_string(a[j]);
								s += to_string(a[p]);
								s+= to_string(a[q]);
								date.push_back(s);
							}
						}
					}
				}
			}
		}else if(a[i] == 1){  //月份大于10的
			for(int j = i+1;j<100;j++){
				if(a[j] <= 2){
				for(int p = j+1;p<100;p++){
					if(a[p] == 0){  //先找日份小于10的
						for(int q = p+1;q<100;q++){
							if(a[q] == 0){
								continue;
							}
							string s = "1";
							s += to_string(a[j]);
							s+= "0";
							s+= to_string(a[q]);
							date.push_back(s);
						}
					}else if(a[p] <=3 ){  //日份大于10的
						for(int q = p+1;q<100;q++){
							if(a[q] <= 1){
								string s = "1";
								s += to_string(a[j]);
								s += to_string(a[p]);
								s+= to_string(a[q]);
								date.push_back(s);
							}
						}
					}
					
				}
				}
			}
		}
	}
	sort(date.begin(),date.end());
	date.erase(unique(date.begin(),date.end()),date.end());
	for(int i = 0;i<date.size();i++){
		cout << date[i] << endl;
	}
	cout << date.size() << endl;
	
	return 0;
}

