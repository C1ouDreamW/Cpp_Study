#include<iostream>
using namespace std;

struct a{
	int n;
	double x;
}p;

void input(struct a * i){
	cin >> i->n;
	cin >> i->x;
}

int main(){
	struct a* q = &p ;
	input(q);
	cout << p.n << p.x <<endl;
}
