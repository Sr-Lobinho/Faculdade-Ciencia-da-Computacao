#include <iostream>
#include "Lista.h"

using namespace std;

//publico
Lista::Lista(){
	this->tam = 0;
	this->quant = 0;
	this->lst = NULL;
}
Lista::Lista(int tam){
	this->tam = tam;
	this->lst = new Livro[this->tam];
	quant = 0;
}

void Lista::insert(int posicao){
	if(!temEspaco()){
		cout << "Lista cheia!" << endl;
	}
	else if(posicao < 0 or posicao > quant){
		cout << "Posicao invalida" << endl;
	}
	else{
		shiftEnd(posicao);
		lst[posicao].preencher();
		quant++;
	}
}
void Lista::insert(Livro l){
	if(!temEspaco()){
		cout << "Lista cheia!" << endl;
	}
	else{
		shiftEnd(0);
		lst[0].copiar(l);
		quant++;
	}
}
void Lista::insert(Livro l, int posicao){
	if(!temEspaco()){
		cout << "Lista cheia!" << endl;
	}
	else if(posicao < 0 or posicao > quant){
		cout << "Posicao invalida" << endl;
	}
	else{
		shiftEnd(posicao);
		lst[posicao].copiar(l);
		quant++;
	}
}

void Lista::remove(){
	if (isEmpty()){
		cout << "A lista ja esta vazia!" << endl;
	}
	else{
		shiftFront(0);
		quant--;
	}
}
void Lista::remove(int posicao){
	if (isEmpty()){
		cout << "A lista ja esta vazia!" << endl;
	}
	else if(posicao < 0 or posicao > quant){
		cout << "Posicao invalida" << endl;
	}
	else{
		shiftFront(posicao);
		quant--;
	}
}

void Lista::imprimir(){
	if(isEmpty()){
		cout << "Lista vazia!" << endl;
	}
	else{
		for(int i = 0; i < quant; i++){
			cout << "Livro " << i << ": " << endl;
			lst[i].imprimir();
			cout << endl;
		}
	}
}

void Lista::preencher(){
	for(int i = 0; i < tam; i ++){
		insert(0);
	}
}


//privado
bool Lista::temEspaco(){
	return (quant < tam);
}

bool Lista::isEmpty(){
	return (quant == 0);
}


void Lista::shiftEnd(int posicao){
	if(!isEmpty()){
		for(int i = quant; i > posicao; i--){
			lst[i].copiar(lst[i-1]);
		}
	}
}

void Lista::shiftFront(int posicao){
	for(int i = posicao; i < quant; i ++){
		lst[i].copiar(lst[i+1]);
	}
}

