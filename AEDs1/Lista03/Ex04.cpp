#include <iostream>
using namespace std;

int main(){

	int *p;
	int x = 1;
	p = &x;
	cout << *p << endl;
	
	*p = x * 5;
	cout << p << endl;
	
	cout << (p+286) << endl;	
}
