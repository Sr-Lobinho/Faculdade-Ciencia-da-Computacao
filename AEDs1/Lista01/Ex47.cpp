#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float i = 0.0;
	cout << "Informe o indice de poluicao atual: ";
	cin >> i;
	
	if (i < 0.3){
		cout << "Tudo certo!";
	}
	else if (i < 0.4){
		cout << "Grupo 1 interrompa as atividades imediatamente!";
	}
	else if (i < 0.5){
		cout << "Grupos 1 e 2 interrompam as atividades imediatamente!";
	}
	else{
		cout << "Grupos 1, 2 e 3 interrompam as atividades imediatamente!";
	}
	
	
	return 0;
}
