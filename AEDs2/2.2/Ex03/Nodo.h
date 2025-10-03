#ifndef NODO_H
#define NODO_H

#include "Livro.h"

class Nodo{
private:
	Livro item;
	Nodo* prox;
public:
	Nodo();
	Nodo(Livro & L);
	
	
	void setProx(Nodo* prox);	
	Nodo* getProx();

	void setItem(Livro& item);
	Livro getItem();
};

#endif 