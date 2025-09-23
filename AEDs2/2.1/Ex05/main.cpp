#include <iostream>
#include "Livro.h"
#include "Lista.h"

int main(){
	Lista lst(6);
	Livro l1, l2, l3,l4;
	l1.preencher();
	l2.preencher();
	l3.preencher();
	l4.preencher();
	lst.insert(l1);
	lst.insert(l2);
	lst.imprimir();
	lst.insert(l3, 1);
	lst.imprimir();
	lst.insert(l4, 2);
	lst.imprimir();
	lst.remove(3);
	lst.imprimir();
	
	return 0;
}
