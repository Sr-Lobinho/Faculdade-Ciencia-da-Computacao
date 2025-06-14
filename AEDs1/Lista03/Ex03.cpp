#include <iostream>
using namespace std;

int main(){
	int a = 413;
	int b = 1225;
	int * A;
	int * B;
	A = &a;
	B = &b;
	
	cout << A << endl;
	cout << *A << endl;
	cout << B << endl;
	cout << *B << endl;
	
	return 0;
}
