#include "Livro.h"
#include <iostream>
using namespace std;
Livro::Livro(){
	this->nome = "";
	this->autor = "";
	this->paginas = 0;
	this->editora = "";
}


void Livro::preencher(){
	cout << "Informe o nome: ";
	cin >> this->nome;
	cout << "Informe o autor: ";
	cin >> this->autor;
	cout << "Informe o numero de paginas: ";
	cin >> this->paginas;
	cout << "Informe a editora: ";
	cin >> this->editora;
}


void Livro::setNome(string nome){
	this -> nome = nome;
}
string Livro::getNome(){
	return this -> nome;
}

void Livro::setAutor(string autor){
	this -> autor = autor;
}
string Livro::getAutor(){
	return this -> autor;
}

void Livro::setPaginas(int paginas){
	this -> paginas = paginas;
}
int Livro::getPaginas(){
	return this -> paginas;
}

void Livro::setEditora(string editora){
	this -> editora = editora;
}
string Livro::getEditora(){
	return this -> editora;
}

