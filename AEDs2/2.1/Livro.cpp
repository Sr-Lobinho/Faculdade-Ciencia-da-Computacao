#include "Livro.h"
#include <iostream>

using namespace std;

Livro::Livro(){
	this->isbn = "";
	this->titulo = "";
	this->autor = "";
	this->editora = "";
	this->edicao = 0;
}

Livro::Livro(Livro& outro){
	this->isbn = outro.getISBN();
	this->titulo = outro.getTitulo();
	this->autor = outro.getAutor();
	this->editora = outro.getEditora();
	this->edicao = outro.getEdicao();
}

void Livro::copiar(Livro& outro){
	this->isbn = outro.getISBN();
	this->titulo = outro.getTitulo();
	this->autor = outro.getAutor();
	this->editora = outro.getEditora();
	this->edicao = outro.getEdicao();
}

void Livro::preencher(){
	cout << "Informe o ISBN: ";
	cin >> this->isbn;
	cout << "Informe o Titulo: ";
	cin >> this->titulo;
	cout << "Informe o Autor: ";
	cin >> this->Autor;
	cout << "Informe a Editora: ";
	cin >> this->editora;
	cout << "Informe a Edicao: ";
	cin >> this->edicao;
}

void Livro::imprimir(){
	cout << "ISBN: " << this->isbn << endl;
	cout << "Titulo: " << this->titulo << endl;
	cout << "Autor: " << this->autor << endl;
	cout << "Editora: " << this->editora << endl;
	cout << "Edicao: " << this->edicao << endl;
}

void Livro::setISBN(string isbn){
	this->isbn = isbn;
}
string Livro::getISBN(){
	return this->isbn;
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

void Livro::setEditora(string editora){
	this->editora = editora;
}
string Livro::getEditora(){
	return this->editora;
}

void Livro::setEdicao(int edicao){
	this->edicao = edicao;
}
int Livro::getEdicao(){
	return this->edicao;
}


