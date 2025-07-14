#include <iostream>
using namespace std;

struct Pessoa{
	string nome;
	char sexo;
	int idade;
	bool temBigode;
	bool usaOculos;
	
	void preenchePessoa(){
		cout << "Informe o nome: ";
		cin >> nome;
		cout << "Informe o sexo (M/H): ";
		cin >> sexo;
		cout << "Informe a idade: ";
		cin >> idade;
		cout << "Informe se possui bigode(1 = Sim/0 = Nao): ";
		cin >> temBigode;
		cout << "Informe se usa oculos(1 = Sim/0 = Nao): ";
		cin >> usaOculos;
	}
	void imprimeDados(){
		cout << "Nome: " << nome << endl;
		cout << "Sexo: " << sexo << endl;
		cout << "Idade: " << idade << endl;
		if(temBigode){
			cout << "Tem bigode: sim" << endl;
		}
		else{
			cout << "Tem bigode: nao" << endl;
		}
		if(usaOculos){
			cout << "Usa oculos: sim" << endl;
		}
		else{
			cout << "Usa oculos: nao" << endl;
		}
	}
};

int main(){
	Pessoa P1;
	P1.preenchePessoa();
	P1.imprimeDados();
	
	return 0;
}
