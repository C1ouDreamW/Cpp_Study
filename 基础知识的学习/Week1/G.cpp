#include<iostream>

using namespace std;

int main(){
	long long n,V;
	int i = 0;
	cin >> n;
	cin >> V;
	int a[n];
	for(i = 0;i<n;i++){
		cin >> a[i];
	}
	
	int cnt = 0,j = 0;
	long long free = V;
	for (j = 0; j < n; j++) {
        if (free >= a[j]) {
            free -= a[j];
        } 
		else {
            cnt++;
            free = V - a[j];
        }
    }

    if (free < V) {
        cnt++;
    }

    cout << cnt << endl;
	
	return 0;
}
