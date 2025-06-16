#include <iostream>
using namespace std;

void comparaAltura(){
	int cod = 0, codmaior = 0, codmenor = 0;
	float altura = 0, alturamaior = 0, alturamenor = 0;
	for (int i = 1; i <= 10; i++){
		cout << "Informe o numero do aluno: ";
		cin >> cod;
		
		cout << "Informe a altura: ";
		cin >> altura;
		
		if (i == 1){
			alturamaior = altura;
			alturamenor = altura;
			codmaior = cod;
			codmenor = cod;
		}
		else if (altura >= alturamaior){
			alturamaior = altura;
			codmaior = cod;
			
		}
		else if (altura <= alturamenor){
			alturamenor = altura;
			codmenor = cod;
		}
		
	}
	
	cout << "Aluno mais alto: " << codmaior << " Altura: " << alturamaior << endl;
	cout << "Aluno mais baixo: " << codmenor << " Altura: "  << alturamenor << endl;
	
}
int main(){
	comparaAltura();
	return 0;
}
