#include <iostream>
using namespace std;

int main(){
	float i = 3;
	float j = 5;
	float *p = &i;
	float *q = &j;
	
	if (p == &i){
		cout << (p == &i) << endl;
	}
	cout << *p - *q << endl;
	
	cout << **&p << endl;
	
	cout << 3*-*p/(*q) + 7 << endl;
	return 0;
}
