#include "Encadeada.h"

using namespace std;
Encadeada::Encadeada(){
	quant = 0;
	head = nullptr;
}

void Encadeada::insert(){
	Livro l;
	l.preencher();
	
	Nodo* novo = new Nodo(l);
	if (quant == 0){
		head = novo;
	}
	else{
	novo->setProx(head);
	head = novo;		
	}
	quant++;
}
void Encadeada::insert(int posicao){
	Livro l;
	l.preencher();
	
	Nodo* novo = new Nodo(l);
	
	if (quant == 0){
		head = novo;
	}
	else if(posicao <= quant){
		Nodo* anterior = this->getElemento(posicao-1);
		novo->setProx(anterior->getProx());
		anterior->setProx(novo);
	}
	else{
		Nodo* anterior = this->getElemento(quant);
		novo->setProx(anterior->getProx());
	}
	quant++;
}

void Encadeada::remove(){
	if (quant == 0){
		cout << "Lista vazia" << endl;
	}
	else{
		head = head->getProx();
		quant--;
	}
}
void Encadeada::remove(int posicao){
	if (posicao >=1 && posicao<= quant){
		if (posicao == 1){
			this->remove();
		}
		else if (posicao == quant){
			Nodo* anterior = this->getElemento(posicao-1);
			anterior->setProx(nullptr);
			quant--;
		}
		else{
			Nodo* anterior = this->getElemento(posicao-1);
			Nodo* saira = anterior->getProx();
			anterior->setProx(saira->getProx());
			quant--;
		}
	}
}

void Encadeada::removeDois(int posicao){
	if (posicao >= 1 && posicao <= quant-1){
		if (posicao == 1){
			Nodo* anterior =  head->getProx();
			head = anterior->getProx();
			quant--;
		}
		else{
			Nodo* anterior = this->getElemento(posicao-1);
			Nodo* segundo = anterior->getProx()->getProx();
			anterior = segundo->getProx();
			quant--;
		}
		
	}
	else if(posicao >= 1 && posicao == quant){
		Nodo* anterior = this->getElemento(posicao-1);
		anterior->setProx(nullptr);
		quant--;
	}
	else{
		cout << "Posicao nao existe" << endl;
	}
}


Nodo* Encadeada::getElemento(int posicao){
	Nodo* p = head;
	int i = 1;
	
	while(i <= posicao - 1 && p->getProx() != nullptr){
		p = p->getProx();
		i++;
	}
	if (i==posicao){
		return p;
	}
	else{
		return nullptr;
	}
}

void Encadeada::imprimir(){
	cout << "Lista: " << endl;
	if(quant != 0){
		Nodo* p = head;
		while(p!= nullptr){
			p->getItem().imprimir();
			p= p->getProx();
		}
	}
}





