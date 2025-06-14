#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float altura, peso, imc, pesoi, dif = 0;
	cout << "Informe sua altura: ";
	cin >> altura;
	cout << "Informe seu peso: ";
	cin >> peso;
	imc = peso/pow(altura, 2);
	if (imc < 16){
		cout << "Magreza Grave";
	}
	else if (imc < 17){
		cout << "Magreza Moderada";
	}
	else if (imc < 18.5){
		cout << "Magreza Leve";
	}
	else if (imc < 25){
		cout << "Saudavel";
	}
	else if (imc < 30){
		cout << "Sobrepeso";
	}
	else if (imc < 35){
		cout << "Obesidade grau 1";
	}
	else if (imc < 40){
		cout << "Obesidade grau 2(severa)";
	}
	else{
		cout << "Obesidade grau 3(morbida)";
	}
	pesoi = 22 * pow(altura, 2);
	cout << endl;
	if (pesoi > peso){
		dif = pesoi - peso;
		cout << "Voce precisa ganhar " << dif << " para ter o peso ideal." << endl;
	}
	else{
		dif = peso - pesoi;
		cout << "Voce precisa perder " << dif << " para ter o peso ideal." << endl;
	}
	return 0;
}
