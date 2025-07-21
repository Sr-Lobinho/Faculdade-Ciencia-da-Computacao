#include <iostream>
using namespace std;

struct Sargento{
	string nome;
	int idade;
	
	void preencheSarg(){
		cout << "Informe o nome do Sargento: ";
		cin >> nome;
		cout << "Informe a idade do Sargento: ";
		cin >> idade;
	}
};
struct Soldado{
	string nome;
	int idade;
	
	void preencheSoldado(int inst){
		cout <<  "Soldado " << inst << ": " << endl;
		cout << "Informe o nome: ";
		cin >> nome;
		cout << "Informe a idade: ";
		cin >> idade;
	}
};
struct Tropa{
	string nome;
	Sargento sarg;
	Soldado *soldados;
	int qtd;
	
	void preencheTropa(){
		cout << "Informe o nome da tropa: ";
		cin >> nome;
		sarg.preencheSarg();
		cout << "Informe quantos soldados fazem parte da Tropa "<< nome <<": ";
		cin >> qtd;
		soldados = new Soldado[qtd];
		for (int i = 0; i < qtd; i++){
			soldados[i].preencheSoldado(i+1);
		}
	}
};

void verificaSoldado(Tropa &T, Soldado &S){
	bool estaNaTropa = false;
	cout << endl;
	cout << "Nome da Tropa: " << T.nome << endl;
	cout << "Sargento: " << T.sarg.nome << ", Idade: " << T.sarg.idade << endl; 
	cout << "Soldados: " << endl;
	for (int i = 0; i < T.qtd; i++){
		cout << "Nome: " << T.soldados[i].nome << ", Idade: " << T.soldados[i].idade << endl;
		if(S.nome == T.soldados[i].nome and S.idade == T.soldados[i].idade){
			estaNaTropa = true;
		}
	}
	if (estaNaTropa){
		cout << "O Soldado informado esta na Tropa!" << endl;
	}
	else {
		cout << "O Soldade informado nao esta no Tropa!" << endl;
	}
	
}

int verificaIdade(Tropa &T, int idade){
	int n = 0;
	for (int i = 0; i < T.qtd; i++){
		if(idade == T.soldados[i].idade){
			n++;
		}
	}
	
	return n;
}

int main(){
	Tropa T1;
	T1.preencheTropa();
	Soldado S1;
	S1.preencheSoldado(0);
	verificaSoldado(T1,S1);
	int idade;
	cout << "Informe uma idade para contar: ";
	cin >> idade;
	cout << "Existem " << verificaIdade(T1, idade) << " soldados com " <<  idade << " anos" << endl;
	return 0;
}
