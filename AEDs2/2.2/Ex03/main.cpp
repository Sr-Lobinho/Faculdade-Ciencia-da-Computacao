#include <iostream>
#include "Encadeada.h"
#include "Nodo.h"
#include "Livro.h"

using namespace std;

int main(){
	Encadeada lista;
	lista.insert();
	lista.insert();
	lista.insert();
	lista.insert();
	lista.insert();
	lista.insert();
	
	lista.imprimir();
	cout << endl;
	
	lista.troca(2,5);
	lista.imprimir();
	
	
	return 0;
}
