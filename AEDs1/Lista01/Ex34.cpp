#include <iostream>
using namespace std;

float mediaPonderada(float a, float b, float c) {
	if (a >= b and a >= c) {
		return (a * 4 + b * 3 + c * 3)/(4+3+3);
	}
	else if (b >= a and b >= c) {
		return (a * 3 + b * 4 + c * 3)/(4+3+3);
	}
	else{
		return (a * 3 + b * 3 + c * 4)/(4+3+3);
	}
	
}

int main(int argc, char** argv) {
	float n1, n2, n3, cm, media = 0.0;
	cout << "Informe seu codigo de matricula: ";
	cin >> cm;
	cout << "Informe a nota 1: ";
	cin >> n1;
	cout << "Informe a nota 2: ";
	cin >> n2;
	cout << "Informe a nota 3: ";
	cin >> n3;
	
	media = mediaPonderada(n1,n2,n3);
	cout << "Media ponderada: " << media << endl;
	if (media >= 50){
		cout << "APROVADO!";
	}
	else {
		cout << "REPROVADO!";
	}
	
	
	return 0;
}
