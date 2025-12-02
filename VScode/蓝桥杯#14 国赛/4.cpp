#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
  int n,m;cin >> n >> m;
  vector<int> a(n),b(m);
  for(int i = 0;i<n;i++){
    cin >> a[i];
  }
  for(int i = 0;i<m;i++){
    cin >> b[i];
  }
  int cnt = 0;
  int l = 0,r = 0;
  int sum_a = 0,sum_b = 0;
  while(l<n&&r<n){
    if(sum_a == sum_b){
      sum_a+=a[l++];
      sum_b+=b[r++];
    }else if(sum_a<sum_b){
      sum_a+=a[l++];
      cnt++;
    }else if(sum_a>sum_b){
      sum_b+=b[r++];
      cnt++;
    }
  }
  cout << cnt << endl;

  return 0;
}
