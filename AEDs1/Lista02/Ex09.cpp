#include <iostream>
using namespace std;

int main(){
	float n = 0.0;
	do{
		cout << "Informe a nota: ";
		cin >> n;
		if (!(n >= 0 and n <= 10)){
			cout << "Nota invalida!" << endl;
		}
	}while(!(n >= 0 and n <= 10));
}
