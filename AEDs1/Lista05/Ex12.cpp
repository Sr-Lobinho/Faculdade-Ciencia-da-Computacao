#include <iostream>
using namespace std;

struct Carro{
	string marca;
	string modelo;
	int ano;
	
	void preencheCarro(){
		cout << "Informe a marca do carro: ";
		cin >> marca;
		cout << "Informe o modelo: ";
		cin >> modelo;
		cout << "Informe o ano: ";
		cin >> ano;
		cout << endl;
	}
	
	void imprimeCarro(){
		cout << "Marca: " << marca << endl;
		cout << "Modelo: " << modelo << endl;
		cout << "Ano: " << ano << endl;
	}
};

int main(){
	Carro C1;
	C1.preencheCarro();
	C1.imprimeCarro();
	return 0;
}
