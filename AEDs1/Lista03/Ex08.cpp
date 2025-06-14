#include <iostream>
using namespace std;

int main(){
	int i = 5;
	int *p;
	p = &i;
	cout << p << "\n" 
	<< (*p+2) << "\n" 
    << **&p <<"\n"
    << (3**p) <<"\n"
    << (**&p + 4);

	return 0;
}
