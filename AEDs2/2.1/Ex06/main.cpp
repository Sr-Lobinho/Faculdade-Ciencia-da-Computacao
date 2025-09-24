#include <iostream>
#include "ListaContigua.h"

using namespace std;



int main() {
	char escolha = '\0';
	int tam;
	cout << "Informe o tamanha da Lista: ";
	cin >> tam;
	ListaContigua lst(tam);
	do {
		int opc = 0;
		int id = 0;
		cout << "Menu de Opcoes:" << endl;
		cout << "1. Adicionar Livro" << endl;
		cout << "2. Remover Livro" << endl;
		cout << "3. Consultar Livro" << endl;
		cout << "4. Exibir Todos os Livros" << endl;
		cout << "Escolha uma opcao:";
		cin >> opc;


		switch (opc) {
			case 1:
				lst.adicionar();
				break;
			case 2:
				cout << "Informe o ID para remover: ";
				cin >> id;
				lst.remover(id);
				break;
			case 3:
				cout << "Informe o ID para consultar: ";
				cin >> id;
				lst.consultar(id);
				break;
			case 4:
				lst.imprimir();
				break;
			default:
				cout << "Opcao invalida" << endl;
		}

		cout << "Deseja realizar outra operacao? (s/n): ";
		cin >> escolha;

	} while (escolha == 's');



	return 0;
}
