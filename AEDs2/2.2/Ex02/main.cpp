#include <iostream>
#include "Encadeada.h"
#include "Nodo.h"
#include "Livro.h"

using namespace std;

int main(){
	Encadeada lista;
	lista.insert();
	cout << lista.getQuant() << endl << endl;
	lista.insert();
	cout << lista.getQuant() << endl << endl;
	lista.insert(2);
	cout << lista.getQuant() << endl << endl;
	lista.insert(3);
	cout << lista.getQuant() << endl << endl;
	
	lista.imprimir();
	cout <<endl;
	cout << lista.getQuant() << endl << endl;

	
	lista.removeDois(2);
	lista.imprimir();
	cout << endl;
	
	cout << lista.getQuant() << endl << endl;
	
	lista.removeDois(2);
	lista.imprimir();
	cout << endl;
	
	cout << lista.getQuant() << endl << endl;
	
	lista.removeDois(2);
	lista.imprimir();
	
	cout << lista.getQuant() << endl << endl;
	
	return 0;
}
