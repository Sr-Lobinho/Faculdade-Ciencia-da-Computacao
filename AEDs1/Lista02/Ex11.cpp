#include <iostream>
using namespace std;

int validaIdade(){
	int i = 0;
	do{
		cout << "Informe a sua idade: ";
		cin >> i;
		if (i < 0 or i > 150){
			cout << "\033[31mIdade Invalida!\033[m" << endl;
		}
	}while(i < 0 or i > 150);
	return i;
}
float validaSalario(){
	float s = 0.0;
	do{
		cout << "Informe seu salario: ";
		cin >> s;
		if (s < 0){
			cout << "\033[31mSalario Invalido!\033[m" << endl;
		}
	}while (s < 0);
	return s;
}
char validaEC(){
	char ec = ' ';
	do{
		cout << "s -   solteiro" << endl;
		cout << "c -   casado" << endl;
		cout << "v -   viuvo" << endl;
		cout << "d -   divorciado" << endl << endl;
		
		cout << "Informe seu Estado civil(minusculo): ";
		cin >> ec;
		if (ec != 's' and ec != 'c' and ec != 'v' and ec != 's'){
			cout << "\033[31mEstado Civil Invalido!\033[m" << endl;
		}
		
	}while(ec != 's' and ec != 'c' and ec != 'v' and ec != 's');
	
	return ec;
}

int main(){
	validaIdade();
	validaSalario();
	validaEC();
	return 0;

}
