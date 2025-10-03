#include <iostream>
#include "Encadeada.h"
#include "Nodo.h"
#include "Livro.h"

using namespace std;

int main(){
	Encadeada lista;
	lista.insert();
	lista.insert();
	lista.insert(2);
	lista.insert(3);
	
	lista.imprimir();
	lista.removeDois(2);
	lista.imprimir();
	lista.removeDois(2);
	lista.imprimir();
	lista.removeDois(2);
	lista.imprimir();
	
	return 0;
}
