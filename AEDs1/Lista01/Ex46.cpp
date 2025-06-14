#include <iostream>
using namespace std;

float calculaPreco(float kw){
	float total = 0;
	if (kw < 100){
		total = kw * 0.5;
	}
	else if (kw < 200){
		total = kw * 0.75;
	}
	else if (kw < 250){
		total = kw * 1.20;
	}
	else{
		total = kw * 1.50;
	}
	total += total * 0.2;
	return total;
	
}

int main(int argc, char** argv) {
	float kw = 0;
	cout << "Informe a quantidade de kW usado: ";
	cin >> kw;
	
	cout << "O preco total sera " << calculaPreco(kw);
	
	
	return 0;
}
