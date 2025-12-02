#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 4000;
int idx = 0;
int head,e[N],ne[N];

int lcm(int a,int b){
	return (a*b)/__gcd(a,b);
}

void add(int a,int b){  //½«bÌí¼Ó½øa
	e[idx] = b;
	ne[idx] = head[a];
	head[a] = idx++; 
}
signed main(){
	memset(ne,-1,sizeof(ne));
	memset(head,-1,sizeof(head));
	for(int i = 1;i<=2021;i++){
		for(int j = 1;j<=2021;j++){
			if(abs(i - j)<=21){
				int len = lcm(i,j);
			}
		}
	}
	
	return 0;
}
