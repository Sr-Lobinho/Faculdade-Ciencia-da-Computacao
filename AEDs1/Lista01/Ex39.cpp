#include <iostream>
using namespace std;

void imprimeEstacao(int m){
	if (m >= 3 and m < 6){
		cout << "Outono!";
	}
	else if (m >= 6 and m < 9){
		cout << "Inverno!";
	}
	else if (m >= 9 and m < 12){
		cout << "Primavera!";
	}
	else if (m <= 12 and m >= 0){
		cout << "Verao!";
	}
	else{
		cout << "Mes invalido!";
	}
}

int main(int argc, char** argv) {
	int mes =0;
	cout << "Informe o mes(numero): ";
	cin >> mes;
	
	imprimeEstacao(mes);
	
	return 0;
}
