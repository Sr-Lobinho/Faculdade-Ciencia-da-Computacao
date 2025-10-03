#include "Nodo.h"


Nodo::Nodo(){
	prox = nullptr; 
}

Nodo::Nodo(Livro& L){
	item.copiar(L);
	prox = nullptr;
}

void Nodo::setProx(Nodo* prox){
	this->prox = prox;
}
Nodo* Nodo::getProx(){
	return prox;
}

void Nodo::setItem(Livro& item){
	this->item.copiar(item);
}
Livro Nodo::getItem(){
	return this->item;
}
