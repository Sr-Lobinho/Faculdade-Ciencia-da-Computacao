#include <iostream>
#include <string>
using namespace std;

void verificaLetra(char opc){
	switch(opc){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << "E uma vogal!" << endl;
			break;
		default:
			cout << "E uma consoante!" << endl;
			
	}
	
}

int main(){
	string letter;
	do{
		cout << "Digite uma letra: ";
		cin >> letter;
		if (letter[1] != '\0' or !(letter[0] >= 'a' and letter[0] <= 'z')) 
		{
		  cout << "Nao e uma letra!" << endl;
		}
	}while((letter[1] != '\0') or !(letter[0] >= 'a' and letter[0] <= 'z'));
	
	verificaLetra(letter[0]);
}
