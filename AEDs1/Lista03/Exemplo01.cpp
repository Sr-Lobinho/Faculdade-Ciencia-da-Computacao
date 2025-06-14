#include <iostream>
using namespace std;

int main(){
		
		int* p, * t;
		double * d = NULL;
		int a = 4;
		double c = 6.7;
		p = &a;
		d = &c;
		t = p;
		for(int i=0; i < 4; i++){
				*t = *p + i;
				*d = *d + 2 * i;
				cout << "*t " << *t << endl;
				cout << "*p " << *p << endl;
				cout << "*d " << *d << endl;
		}
		cout << "a: " << a << endl;
		return 0;
}
