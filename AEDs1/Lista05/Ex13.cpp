#include <iostream>
using namespace std;

struct Contato{
	string nome;
	string numero;
	
	void preencheContato(int inst){
		cout << "Contato " << inst+1 << ": " << endl;
		cout << "Informe o nome: ";
		cin >> nome;
		cout << "Informe o numero: ";
		cin >> numero;
	}
};

struct Agenda{
	Contato *contatos;
	int tam;
	int numcontatos = 0;
	
	void criaAgenda(){
		cout << "Informe o tamanho maximo da Agenda: ";
		cin >> tam;
		contatos = new Contato[tam];
		numcontatos = 0;
	}
	void adicionaContato(){
		if (numcontatos < tam){
			Contato novo;
			novo.preencheContato(numcontatos);
			contatos[numcontatos] = novo;
			numcontatos++;
			cout << "Contato adicionado com sucesso!" << endl;
		}
		else{
			cout << "A Agenda esta cheia!" << endl;
		}
	}
	void excluiContato(){
		bool contatoEncontrado = false;
		string nomep;
		cout << "Informe o nome do contato que deseja excluir: ";
		cin >> nomep;
		for (int i = 0; i < numcontatos; i++){
			if (contatos[i].nome == nomep){
				for(int j = i; j < numcontatos - 1; j++){
					contatos[j] = contatos[j+1]; 
				}
				numcontatos--;
				contatoEncontrado = true;
				cout << "Contato excluido com sucesso!" << endl;
			}
		
		}
		if(!contatoEncontrado){
			cout << "O contato nao foi encontrado!" << endl;
		}
	}
	void imprimeContatos(){
		cout << "Lista de contatos na agenda: " << endl;
		for (int i = 0; i < numcontatos; i++){
			cout << "Nome: " << contatos[i].nome << " Numero: " << contatos[i].numero << endl;
		}
	}
};

int main(){
	Agenda A1;
	bool menu = true;
	int opt = 0;
	A1.criaAgenda();
	while(menu){
		cout << endl;
		cout << "1 - Adicionar contato" << endl;
		cout << "2 - Excluir contato" << endl;
		cout << "3 - Exibir contatos" << endl;
		cout << "4 - Criar uma nova agenda(exclui a antiga)" << endl;
		cout << "5 - Encerrar programa" << endl;
		cout << "Opcao: ";
		cin >> opt;
		cout << endl;
		switch (opt){
			case 1:
				A1.adicionaContato();
				break;
			case 2:
				A1.excluiContato();
				break;
			case 3:
				A1.imprimeContatos();
				break;
			case 4:
				A1.criaAgenda();
				break;
			case 5:
				menu = false;
				break;
			default:
				cout << "Opcao invalida!" << endl;
		}	
	}
	
	cout << "Fim do programa" << endl;
	return 0;
}
