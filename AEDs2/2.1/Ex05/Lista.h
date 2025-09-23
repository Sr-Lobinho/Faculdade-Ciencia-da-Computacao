#ifndef LISTA_H
#define LISTA_H

#include "Livro.h"

class Lista{
private:
	int tam;
	int quant;
	Livro* lst;
	
	bool temEspaco();
	bool isEmpty();
	void shiftEnd(int posicao);
	void shiftFront(int posicao);
	
public:
	Lista();
	Lista(int tam);
	
	void insert(int posicao);
	void insert(Livro l);
	void insert(Livro l, int posicao);
	
	void remove();
	void remove(int posicao);
	
	void imprimir();
	void preencher();
	
};


#endif /*LISTA_H*/
