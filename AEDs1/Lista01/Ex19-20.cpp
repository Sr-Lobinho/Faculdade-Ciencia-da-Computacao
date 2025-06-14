#include <iostream>
using namespace std;

void carteiraMotorista(int i){
	if (i >= 18){
		cout << "Voce esta apto para tirar a carteira de motorista. ";
	}
	else{
		cout << "Voce nao esta apto para tirar a carteira de motorista, ainda faltam " << 18 - i << " anos.";
	}
	
}

int main(int argc, char** argv) {
	int idade = 0;
	cout << "Informe sua idade em anos: ";
	cin >> idade;
	carteiraMotorista(idade);
	
	return 0;
}
