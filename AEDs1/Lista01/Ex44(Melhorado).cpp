#include <iostream>
using namespace std;

float maior(float a, float b, float c){
	float resultado = 0;
	if ((a > b) and (a > c)){
		resultado = a;
	}
	else if ((b > a) and (b > c)){
		resultado = b; 
	}
	else{
		resultado = c;
	}
	return resultado;
}
float menor(float a, float b, float c){
	float resultado = 0;
	if ((a < b) and (a < c)){
		resultado = a;
	}
	else if ((b < a) and (b < c)){
		resultado = b;
	}
	else{
		resultado = c;
	}
	return resultado;	
}
float meio(float a, float b, float c){
	float resultado = 0;
	if (((a > b) and (a < c)) or ((a < b) and (a > c))){
		resultado = a;
	}
	else if (((b > a) and (b < c)) or ((b < a) and (b > c))){
		resultado = b;
	}
	else{
		resultado = c;
	}
	return resultado;
}

int main(int argc, char** argv) {
	int i = 0;
	float a, b, c, menorValor, maiorValor, meioValor = 0;
	
	cout << "Informe o primeiro valor: ";
	cin >> a;
	cout << "Informe o segundo valor: ";
	cin >> b;
	cout << "Informe o terceiro valor: ";
	cin >> c;
	cout << endl;
	
	cout << "1 - Ordem Crescente" << endl;
	cout << "2 - Ordem Decrescente" << endl;
	cout << "3 - Destacar maior" << endl;
	cout << "Escolha: ";
	cin >> i;
	cout << endl;
	
	menorValor = menor(a,b,c);
	maiorValor = maior(a,b,c);
	meioValor = meio(a,b,c);
	
	switch (i){
		case 1:
			cout << menorValor <<", " << meioValor << ", " << maiorValor;
			break;
		case 2:
			cout << maiorValor <<", " << meioValor << ", " << menorValor;
			break;
		case 3:
			cout << menorValor <<", " << maiorValor << ", " << meioValor;
			break;
		default:
			cout << "Opcao invalida!";
	}
	return 0;
}
