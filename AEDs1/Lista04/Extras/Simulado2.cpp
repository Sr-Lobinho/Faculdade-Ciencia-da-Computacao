#include <iostream>
using namespace std;

int fatorial(int n){
	if (n == 0){
		return 1;
	}
	else{
		return n * fatorial(n-1);
	}
}

int main(){
	int n = 0;
	do{
		cout << "Informe um numero: ";
		cin >> n;
		if (n <= 0){
			cout << "Numero invalido!" << endl;
		}
	}while(n <= 0);
	
	cout << "O fatorial desse numero e: " << fatorial(n) << endl;
	return 0;
}
