#include<iostream>
#include<cmath>

using namespace std;

const int N = 30;
int n;
int cnt = 0;


int temp[N];
bool col[N],row[N],urow[N];  //bool数组未初始化时，表现为全False

void find_all(int u){  //u为行数 
	if(u > n){
		cnt++;
		if(cnt > 3){
			return;
		}
		for(int i = 1;i<=n;i++) {
			cout << temp[i] << " " ;
		}
		printf("\n"); 
		
		return;
	}
	for(int i = 1;i<=n;i++){
		if((!col[i]) && (!row[i+u]) && (!urow[i-u+n])){
			col[i] = row[i+u] = urow[i-u+n] = true;
			temp[u] = i;
			find_all(u+1);
			col[i] = row[i+u] = urow[i-u+n] = false;
		}
	}
}

int main(){
	cin >> n;
	find_all(1);
	cout << cnt << endl;

	return 0;
}

