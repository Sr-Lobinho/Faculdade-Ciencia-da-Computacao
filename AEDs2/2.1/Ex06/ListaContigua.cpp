#include "ListaContigua.h"
#include <iostream>
using namespace std;


//publico
ListaContigua::ListaContigua() {
	this->tam = 0;
	this->quant = 0;
	this->lista = NULL;
}

ListaContigua::ListaContigua(int tam) {
	this->tam = tam;
	this->lista = new Livro[this->tam];
	this->quant = 0;
}

void ListaContigua::adicionar() {
	if (!estaCheia()) {
		shiftEnd(0);
		lista[0].preencher();
		quant++;
	}
	else {
		cout << "Lista cheia!" << endl;
	}
}

void ListaContigua::remover(int id) {
	if (!isEmpty()) {
		int posicao = busca(id);
		if (posicao == -1) {
			cout << "\033[31mO ID informado nao existe na lista\033[m" << endl;
		}
		else {
			shiftFront(posicao);
			quant--;
		}
	}
	else {
		cout << "Lista vazia" << endl;
	}
}

void ListaContigua::consultar(int id) {
	if (!isEmpty()) {
		int posicao = busca(id);
		if (posicao == -1) {
			cout << "\033[31mO ID informado nao existe na lista\033[m" << endl;
		}
		else {
			lista[posicao].imprimir();
		}
	}
	else {
		cout << "\033[31mLista vazia\033[m" << endl;
	}
}

void ListaContigua::imprimir() {
	if (!isEmpty()) {
		for (int i = 0; i < quant; i++) {
			lista[i].imprimir();
		}
	}
}

//privado

bool ListaContigua::estaCheia() {
	return (quant == tam);
}
bool ListaContigua::isEmpty() {
	return (quant == 0);
}

void ListaContigua::shiftEnd(int posicao) {
	for (int i = quant; i > posicao; i--) {
		lista[i].copiar(lista[i - 1]);
	}
}

void ListaContigua::shiftFront(int posicao) {
	for (int i = 0; i < quant - 1; i++) {
		lista[i].copiar(lista[i + 1]);
	}
}

int ListaContigua::busca(int id) {
	for (int i = 0; i < quant; i++) {
		if (lista[i].getID() == id) {
			return i;
		}
	}
	return -1;
}
