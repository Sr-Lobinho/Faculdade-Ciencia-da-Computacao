#include <iostream>
using namespace std;

int main(){
	int resposta = 8;
	int tentativas = 0;
	int palpite = 0;
	
	cout << "Bem vindo ao jogo de adivinhacao!" << endl;
	cout << "Eu pensei em um numero de 1 a 100 adivinhe qual." << endl;
	
	while (palpite != resposta){
		cout << "Digite o seu palpite: ";
		cin >> palpite;
		if (palpite < resposta){
			cout << "O numero e maior que " << palpite << endl;
		}
		else if (palpite > resposta){
			cout << "O numero e menor que " << palpite << endl;
			
		}
		tentativas += 1;
	}
	cout << "Parabens!!!!!!";
	return 0;
}
