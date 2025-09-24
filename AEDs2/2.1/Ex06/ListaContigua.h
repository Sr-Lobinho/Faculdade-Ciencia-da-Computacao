#ifndef LISTACONTIGUA_H
#define LISTACONTIGUA_H
#include "Livro.h"


class ListaContigua{
private:
	int tam;
	int quant;
	Livro* lista;

	bool isEmpty();
	bool estaCheia();
	void shiftEnd(int posicao);
	void shiftFront(int posicao);
	int busca(int id);
public:
	ListaContigua();
	ListaContigua(int tam);

	void adicionar();
	void remover(int id);
	void consultar(int id);
	void imprimir();

};

#endif /*LISTACONTIGUA_H*/
