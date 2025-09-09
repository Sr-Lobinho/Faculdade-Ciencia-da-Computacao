#include "Carro.h"
#include <iostream>
using namespace std;

Carro::Carro(){
    nome = " ";
    marca = " ";
    motorizacao = " ";
    cor = " ";
    valor = 0.0;
}

Carro::Carro(const Carro & outro){
    this->nome = outro.getNome();
    this->marca = outro.getMarca();
    this->motorizacao = outro.getMotorizacao();
    this->cor = outro.getCor();
    this->valor = outro.getValor();
}


void Carro::setNome(string nome){
    this->nome = nome;
}
string Carro::getNome(){
    return this->nome;
}

void Carro::setMarca(string marca){
    this->marca = marca;
}
string Carro::getMarca(){
    return this->marca;
}

void Carro::setMotorizacao(string motorizacao){
    this->motorizacao = motorizacao;
}
string Carro::getMotorizacao(){
    return this->motorizacao;
}

void Carro::setCor(string cor){
    this->cor = cor;
}
string Carro::getCor(){
    return this->cor;
}

void Carro::setValor(float valor){
    this->valor = valor;
}
float Carro::getValor(){
    return this->valor;
}
