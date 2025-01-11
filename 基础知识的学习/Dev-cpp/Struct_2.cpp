#include<iostream>
using namespace std;

typedef struct {
	int x;
	int y;
}q;

int main(){
	q p = {1,2};
	
	cout << p.x;
	
	return 0;
}
