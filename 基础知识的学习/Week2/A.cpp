#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;

struct Node{
	int id;
	int a,b;
};

bool cmp_a(const Node& A,const Node& B){
	if(A.a*(B.a+B.b) != B.a*(A.a+A.b)) return A.a*(B.a+B.b) > B.a*(A.a+A.b);
	else return A.id < B.id;
}

signed main(){
	int n;
	scanf("%d",&n);
	vector<Node> coin(n);
	for(int i = 0;i<n;i++) {
		scanf("%d %d",&coin[i].a,&coin[i].b);
		coin[i].id = i+1;
	}
	sort(coin.begin(),coin.end(),cmp_a);
	for(int i = 0;i<n;i++) printf("%lld ",coin[i].id);
	return 0;
}


