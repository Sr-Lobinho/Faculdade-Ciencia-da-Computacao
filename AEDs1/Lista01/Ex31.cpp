#include <iostream>
using namespace std;

void classificaIdade(int i){
	if (i < 5){
		cout << "Voce nao possui idade para natacao.";
	}
	else if (i <= 7){
		cout << "Voce esta na categoria Infantil A.";
	}
	else if (i <= 10){
		cout << "Voce esta na categoria Infantil B.";
	}
	else if (i <= 13){
		cout << "Voce esta na categoria Juvenil A.";
	}
	else if (i <= 17){
		cout << "Voce esta na categoria Juvenil B.";
	}
	else if (i >= 18){
		cout << "Voce esta na categoria Adulto.";
	}
}
int main(int argc, char** argv) {
	int idade = 0;
	cout << "Informe sua idade: ";
	cin >> idade;
	classificaIdade(idade);
	
	return 0;
}
