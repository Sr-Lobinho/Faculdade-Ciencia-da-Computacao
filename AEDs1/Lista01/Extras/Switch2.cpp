#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	char opcao =' ';
	cout << "Digite uma letra do alfabeto: ";
	cin >> opcao;
	switch(opcao){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << "E uma Vogal";
			break; 	
		default:
			if (opcao > 'a' and opcao < 'z'){
				cout << "E uma Consoante";
			}
			else{
				cout << "Opcao invalida!";
			}
			break;
	}
	return 0;
}
