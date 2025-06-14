#include <iostream>
using namespace std;

void imprimeTabela(){
	float total = 0, dinheiro = 0, p = 0, c = 1;
	cout << "----Produtos comprados----" << endl;
	do{
		cout << "Produto " << c << ": R$";
		cin >> p;
		total += p;
		c++;
	}while(p!=0);
	cout << "--------------------------" << endl;
	cout << "Total: R$" << total << endl;
	cout << "--------------------------" << endl;	
	cout << "Dinheiro: R$";
	cin >> dinheiro;
	cout << "Troco: R$" << dinheiro - total << endl << endl;
	
	imprimeTabela();
}

int main(){
	
	imprimeTabela();
	return 0;
}
