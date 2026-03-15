#include "Livro.h"

Livro::Livro(){
	nome = "";
	autor = "";
	numeroPaginas = 0;
	editora = "";
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

void Livro::setNumeroPaginas(int numeroPaginas){
	this -> numeroPaginas = numeroPaginas;
}
int Livro::getNumeroPaginas(){
	return this -> numeroPaginas;
}

void Livro::setEditora(string editora){
	this -> editora = editora;
}
string Livro::getEditora(){
	return this -> editora;
}
