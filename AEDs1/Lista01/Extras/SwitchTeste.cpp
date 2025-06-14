#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int opcao = 0;
	cout << "0 - Calcular Fatorial" << endl << "1 - Calcular Primo" << endl << "2 - Calcular Dobro" << endl << "3 - Sair do Programa" << endl;
	cin >> opcao;
	
	switch(opcao){
		case 0:
			cout << "Calculando Fatorial...";
			break;
		case 1:
			cout << "Calculando Primo... ";
			break;
		case 2:
			cout << "Calculando Dobro...";
			break;
		case 3:
			cout << "Fechando o programa...";
			break;
		default:
			cout << "Opcao invalida!";
		
	}	
	return 0;
}
