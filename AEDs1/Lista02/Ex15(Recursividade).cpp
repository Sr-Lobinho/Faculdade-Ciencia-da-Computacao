#include <iostream>
using namespace std;

int calculaPotenciaR(int b, int e){
	if (e == 0){
		return 1;
	}
	else{
		return b * calculaPotenciaR(b, e-1);
	}
}

int main(){
	int exp = 0, base = 0;
	cout << "\033[34mInforme a base da potencia: ";
	cin >> base;
	cout << "\033[31mInforme o expoente da potencia: ";
	cin >> exp;
	
	cout << "\033[35m" << base << "^" << exp << " = " << calculaPotenciaR(base, exp) << "\033[m" << endl;
	return 0;
}
