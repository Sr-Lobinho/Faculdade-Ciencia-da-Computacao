#include <iostream>
using namespace std;

int calculaHora(int a1, int an){
	if (an > a1){
		return an - a1;
	}
	else{
		int Falta = 24 - a1 + an;
		return Falta;
	}
	
}

int main(int argc, char** argv) {
	int hI, hF, resultado = 0;
	cout << "Informe a hora de inicio do jogo: ";
	cin >> hI;
	cout << "Informe a hora em que o jogo terminou: ";
	cin >> hF;
	
	resultado = calculaHora(hI,hF);
	if (resultado > 24 or resultado < 1){
		cout << "O horario esta fora do minimo/maximo.";
	}
	else{
		cout << "O jogo durou " << resultado << " horas";
	}
	
	return 0;
}
