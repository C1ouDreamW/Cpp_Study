#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e7+9;
const int A = 23333333333333;
bool vt[N];
int ps[N];
int idx;

void div(int n){
  for(int i = 2;i<=n;i++){
    if(!vt[i]){
      ps[idx++] = i;
          for(int j = i+i;j<=n;j+=i){
    	vt[j] = true;
  	}
    }

  }
}

signed main()
{
  int n = sqrt(N);
  div(N);
  int cnt = 0;
  for(int i = 0;i<idx;i++){
  	int y = ps[i] * ps[i];
  	if(y*y>A){
  		break;
	  }
  	for(int j = i+1;j<idx;j++){
  		int q = ps[j] * ps[j];
        if(y*q>23333333333333) break;
        if(y*q<2333) continue;
        cnt++;
	  }
  }
  cout << cnt << endl;

  return 0;
}
