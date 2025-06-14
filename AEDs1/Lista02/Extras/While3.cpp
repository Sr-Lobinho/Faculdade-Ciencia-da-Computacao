#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int seed = time(0);
	srand(seed);
	
	int resposta = rand() % 100 + 1;
	int tentativas = 0;
	int palpite = 0;
	
	cout << "Bem vindo ao jogo de adivinhacao" << endl;
	cout << "Eu pensei em um numero de 1 a 100, tente adivinhar qual e!" << endl;
	
	while (palpite != resposta){
		cout << "Digite seu palpite: ";
		cin >> palpite;
		if (palpite > resposta){
			cout << "O numero e menor que " << palpite <<  "!" << endl;
		}
		else if (palpite < resposta){
			cout << "O numero e maior que " << palpite << "!" << endl;
		}
		tentativas +=  1;
	}
	
	cout << "Parabens!!! Voce acertou em " << tentativas << " tentativas!";
	
	
	return 0;
}
