#include <iostream>
using namespace std;

int prodimpRE(int qtde){
	int num = 0, produto = 0;
	if (qtde == 0){
		return 1;
	}
	cout << "Informe um numero: ";
	cin >> num;

	if (num % 2 != 0){
		produto = num *prodimpRE(qtde-1);
		cout << "Parcial: " << produto << endl;
	}
	else{
		produto = prodimpRE(qtde-1);
		cout << "Par ignorado: " << produto << endl;
	}
	
	return produto;
}

int main(){
	int qtde =0;
	cout << "Quantos numeros? ";
	cin >> qtde;
	if (qtde <= 0){
		cout << "Qtde invalida." << endl;
		return 1;
	}
	int resultado = prodimpRE(qtde);
	
	cout << "Produtorio: " << resultado;	
	return 0;
}
