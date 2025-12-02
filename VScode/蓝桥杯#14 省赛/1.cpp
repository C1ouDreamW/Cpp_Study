#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
	vector<int> a(100);
	vector<string> ans;
	for(int i = 0;i<100;i++){
		cin >> a[i];
	}
	for(int i = 0;i<100;i++){
		if(a[i] == 2){
			for(int j = i+1;j<100;j++){
				if(a[j] == 0){
					for(int p = j+1;p<100;p++){
						if(a[p] == 2){
							for(int q = p+1;q<100;q++){
								if(a[q] == 3){
									for(int x = q+1;x<100;x++){
										if(a[x]>1){
											continue;
										}
										for(int y = x+1;y<100;y++){
											if(a[x] == 1&&a[y]>2){
												continue;
											}
											if(a[x] == 0&&a[y] == 0){
												continue;
											}
											for(int g = y+1;g<100;g++){
												if(a[g]>3){
													continue;
												}
												for(int h = g+1;h<100;h++){
													if(a[g] == 3&&a[h]>1){
														continue;
													}
													if(a[g] == 0&&a[h]==0){
														continue;
													}
													string s = "2023";
													s+=to_string(a[x]);
													s+=to_string(a[y]);
													s+=to_string(a[g]);
													s+=to_string(a[h]);
													ans.push_back(s);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}	
		}
	}
	sort(ans.begin(),ans.end());
	ans.erase(unique(ans.begin(),ans.end()),ans.end());
//	for(int i = 0;i<ans.size();i++){
//		cout << ans[i] << endl;
//	}
	cout << ans.size() << endl;
	
	return 0;
}
