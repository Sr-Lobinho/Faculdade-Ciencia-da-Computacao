#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int cod, quant = 0;

	
	cout << "Especificacao        Codigo      Preco" << endl;
	cout << "Cachorro quente:      100        2,20" << endl;
	cout << "Bauru Simples:        101        3,30" << endl;
	cout << "Bauru com Ovo:        102        3,50" << endl;
	cout << "Hamburger:            103        5,20" << endl;
	cout << "Cheeseburger:         104        7,30" << endl;
	cout << "Refrigerante          105        2,00" << endl << endl;
	
	cout << "Informe o codigo do pedido: ";
	cin >> cod;
	cout << "Informe a quantidade que deseja comprar: ";
	cin >> quant;
	
	
	switch (cod){
		case 100:
			cout << "O preco total sera R$" << quant * 2.20;
			break;
		case 101:
			cout << "O preco total sera R$" << quant * 3.30;
			break;
		case 102:
			cout << "O preco total sera R$" << quant * 3.50;
			break;
		case 103:
			cout << "O preco total sera R$" << quant * 5.20;
			break;
		case 104:
			cout << "O preco total sera R$" << quant * 7.30;
			break;
		case 105:
			cout << "O preco total sera R$" << quant * 2.00;
			break;
		default:
			cout << "Codigo invalido!";
	}
	
	return 0;
}
