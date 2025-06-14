#include <iostream>
using namespace std;

int main(){
	int n = 0;
	do{
		cout << "Informe a nota: ";
		cin >> n;
		if (n > 10){
			cout << "Nota invalida!" << endl;
		}
	}while(n >= 0);
}
