#include <iostream>
using namespace std;

void imprimeCardapio(){
	cout << "Especificacao             Codigo           Preco" << endl;
	cout << "Cachorro Quente            100           R$ 1,20" << endl;
	cout << "Bauru Simples              101           R$ 1,30" << endl;
	cout << "Bauru com Ovo              102           R$ 1,50" << endl;
	cout << "Hamburger                  103           R$ 1,20" << endl;
	cout << "Cheeseburger               104           R$ 1,30" << endl;
	cout << "Refrigerante               105           R$ 1,00" << endl;
	cout << "Encerrar Pedido            999           -------" << endl << endl;
}

void calculaPreco(){
	int cod = 0, qtd = 0, i = 1;
	float total = 0;
	
	while (cod != 999){
		cout << "Informe o codigo do item " << i << ": ";
		cin >> cod;
		cout << "Informe a quantidade de itens " << i << ": ";
		cin >> qtd;
		
		switch (cod){
			case 100:
				total += 1.20 * qtd;
				break;
			case 101:
				total += 1.30 * qtd;
				break;
			case 102:
				total += 1.50 * qtd;
				break;
			case 103:
				total += 1.20 * qtd;
				break;
			case 104:
				total += 1.30 * qtd;
				break;
			case 105:
				total += 1 * qtd;
				break;
			case 999:
				cout << "Pedido encerrado" << endl;
				break;
			default:
				cout << "Codigo invalido!" << endl;
		}
		i++;
	}
	cout << endl;
	cout << "Preco total: R$" << total << endl;
}
int main(){
	imprimeCardapio();
	calculaPreco();
	return 0;
}
