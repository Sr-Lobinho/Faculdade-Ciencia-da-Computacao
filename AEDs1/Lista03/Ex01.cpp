#include <iostream>
using namespace std;

int main(){
	int var;
	int *ptr;
	var = 10;
	ptr = &var;
	cout << *ptr << endl;
	
	return 0;
}
