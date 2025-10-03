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
	if (posicao >= 1 && posicao <= quant){
		
		if(posicao == quant){
			if (quant == 1){
				head = head->getProx();
				quant-=1;
			}
			else{
				Nodo* anterior = this->getElemento(posicao-1);
				anterior->setProx(nullptr);
				quant-=1;
			}
			cout << "O segundo elemento nao existe" << endl << endl;
		}
		
		else if (posicao == 1){
			Nodo* anterior =  head->getProx();
			head = anterior->getProx();
			quant-=2;
		}
		
		else{
			Nodo* anterior = this->getElemento(posicao-1);
			Nodo* anteriorSegundo = this->getElemento(posicao+1);
			anterior->setProx(anteriorSegundo->getProx());
			quant-=2;
		}
		
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

int Encadeada::getQuant(){
	return this->quant;
}

void Encadeada::troca(int p1, int p2){
	if ((p1 <= quant && p1>=1 ) && (p2 <= quant && p2 >=1)){
		
		Nodo* anterior_L1 = this->getElemento(p1-1);
		Nodo* anterior_L2 = this->getElemento(p2-1);
		
		Nodo* L1 = anterior_L1->getProx();
		Nodo* L2 = anterior_L2->getProx();
		
		Nodo* aux1 = L1->getProx();
		
		L1->setProx(L2->getProx());
		L2->setProx(aux1);
		
		Nodo* aux2 = anterior_L1->getProx();
		
		anterior_L1->setProx(anterior_L2->getProx());
		anterior_L2->setProx(aux2);
		
	}
	
	
}

