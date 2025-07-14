#include <iostream>
using namespace std;

struct Pessoa{
	string nome;
	int idade;
	float altura;
	
	void preenchePessoa(int inst){
		cout << "Informe o nome da pessoa " << inst <<": ";
		cin >> nome;
		cout << "Informe a idade da pessoa " << inst <<": ";
		cin >> idade;
		cout << "Informe a altura da pessoa " << inst <<": ";
		cin >> altura;

	}
	void imprimeDados(int inst){
		cout << "Nome "<< inst << ": " << nome << endl;

		cout << "Idade " << inst << ": " << idade << endl;
		
		cout << "Altura " << inst << ": " << altura << endl;
	}
};

int main(){
	Pessoa P1, P2;
	P1.preenchePessoa(1);
	P2.preenchePessoa(2);
	P1.imprimeDados(1);
	P2.imprimeDados(2);
	
	return 0;
}
