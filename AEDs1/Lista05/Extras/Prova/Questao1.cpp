#include <iostream>
using namespace std;

struct Medico{
	string nome;
	string especialidade;
	
	void preencheMedico() {
		cout << "Informe o nome do Medico: ";
		cin >> nome;
		cout << "Informe a especialidade: ";
		cin >> especialidade;
	}
};

struct Paciente{
	string nome;
	string queixa;
	int idade;
	
	void preenchePaciente(){
		cout << "Informe o nome do paciente: ";
		cin >> nome;
		cout << "Informe a idade: ";
		cin >> idade;
		cout << "Informe a queixa: ";
		cin >> queixa;
	}
};

struct Remedio{
	string nome;
	float dosagem;
	float preco;
	
	void preencheRemedio(int inst){
		cout << "Remedio " << inst << ": " << endl;
		cout << "Informe o nome: ";
		cin >> nome;
		cout << "Informe a dosagem: ";
		cin >> dosagem;
		cout << "Informe o preco: ";
		cin >> preco;
	}
};

struct Atendimento{
	float preco;
	Paciente P;
	Medico M;
	Remedio *R;
	int qtd;
	
	void criaAtendimento(){
		P.preenchePaciente();
		M.preencheMedico();
		cout << "Informe o preco do atendimento: ";
		cin >> preco;
		cout << "Informe a quantidade de remedios: ";
		cin >> qtd;
		R = new Remedio[qtd];
		for (int i = 0; i < qtd; i++){
			R[i].preencheRemedio(i+1);
		}
	}
	
};

void verificaMedico(Atendimento &A, Medico &M){
	cout << "Paciente: " << A.P.nome << endl;
	cout << "Idade: " << A.P.idade << endl;
	cout << "Queixa: " << A.P.queixa << endl;
	cout << "Preco do Atendimento: " << A.preco << endl;
	
	if(M.nome == A.M.nome){
		cout << "Medico presente." << endl;
	}
	
}

float somaPreco(Atendimento &A){
	float soma = 0;
	for (int i = 0; i < A.qtd; i++){
		soma += A.R[i].preco;
	}
	return soma;
}

float precoTotal(Atendimento &A){
	float total = somaPreco(A);
	total += A.preco;
	return total;
}

void maiorGasto(Atendimento &A1, Atendimento &A2){
	float total1 = precoTotal(A1);
	float total2 = precoTotal(A2);
	
	if (total1 > total2){
		cout << "Paciente que mais gastou: " << A1.P.nome << endl;
	}
	else{
		cout << "Paciente que mais gastou: " << A2.P.nome << endl;
	}
}

int main(){
	Atendimento A1, A2;
	Medico M0;
	A1.criaAtendimento();
	A2.criaAtendimento();
	M0.preencheMedico();
	verificaMedico(A1,M0);
	maiorGasto(A1,A2);
	return 0;
}
