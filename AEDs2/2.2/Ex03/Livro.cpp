#include "Livro.h"
#include <iostream>
using namespace std;

Livro::Livro(){
	this->id = 0;
	this->titulo = "";
	this->autor = "";
}

Livro::Livro(Livro& outro){
	this->id = outro.getID();
	this->titulo = outro.getTitulo();
	this->autor = outro.getAutor();
}


void Livro::copiar(Livro& outro) {
	this->id = outro.getID();
	this->titulo = outro.getTitulo();
	this->autor = outro.getAutor();
}

void Livro::imprimir() {
	cout << "ID: " << this->id << endl;
	cout << "Titulo: " << this->titulo << endl;
	cout << "Autor: " << this->autor << endl;
}

void Livro::preencher() {
	cout << "Informe o ID: ";
	cin >> this->id;
	cout << "Informe o Titulo: ";
	cin >> this->titulo;
	cout << "Informe o Autor: ";
	cin >> this->autor;
}


void Livro::setID(int id){
	this->id = id;
}
int Livro::getID(){
	return this->id;
}

void Livro::setTitulo(string titulo){
	this->titulo = titulo;
}
string Livro::getTitulo(){
	return this->titulo;
}

void Livro::setAutor(string autor){
	this->autor = autor;
}
string Livro::getAutor(){
	return this->autor;
}
