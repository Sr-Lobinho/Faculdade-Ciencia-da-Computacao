#include <iostream>
using namespace std;

float calculaImposto(float s){
	float total = 0;
	if (s < 1500){
		return total;
	}
	else if (s < 3000){
		total += s * 0.12 ;
	}
	else if (s < 4000){
		total +=  s * 0.2;
	}
	else{
		total += s * 0.27;
	}
	return total;
}
int main(int argc, char** argv) {
	float salario = 0.0;
	cout << "Informe o seu salario: ";
	cin >> salario;
	cout << "O valor do imposto sera " << calculaImposto(salario);
	
	return 0;
}
