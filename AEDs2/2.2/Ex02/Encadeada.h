#ifndef ENCADEADA_H
#define ENCADEADA_H
#include <iostream>
#include "Nodo.h"

class Encadeada{
private:
	int quant;
	Nodo *head;
	
public:
	Encadeada();
	
	void insert();
	void insert(int posicao);
	
	void imprimir();
	
	void remove();
	void remove(int posicao);
	void removeDois(int posicao);
	
	Nodo* getElemento(int posicao);
	
	int getQuant();
	
};

#endif /* ENCADEADA_H */