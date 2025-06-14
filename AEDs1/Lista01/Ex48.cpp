#include <iostream>
using namespace std;

float calculaPreco(float v1, float v2, float q1, float q2, float IPI){
	return (v1*q1+v2*q2)*(IPI/100+1);
}

int main(int argc, char** argv) {
	int cod1, cod2 = 0;
	float v1, v2, IPI, quant1, quant2 = 0.0;
	
	cout << "Informe o codigo, o valor e quantidade da Peca 1 respectivamente: " << endl;
	cin >> cod1;
	cin >> v1;
	cin >> quant1;
	
	cout << "Informe o codigo, o valor e quantidade da Peca 2 respectivamente: " << endl;
	cin >> cod2;
	cin >> v2;
	cin >> quant2;
	
	cout << "Informe a porcentagem do IPI: ";
	cin >> IPI;
	cout << "O produto 1 vale R$" << v1 << " e o produto 2 vale R$" << v2 << endl;
	cout << "O codigo do produto 1 e " << cod1 << " e o codigo do produto 2 e " << cod2 << endl;
	cout << "O valor do IPI e " << IPI << endl; 
	cout << "O valor total a ser pago sera: " << calculaPreco(v1,v2,quant1,quant2,IPI);
	
	return 0;
}
