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

void Carro::imprimir(){
    cout << "Nome: " << this->nome << endl;
    cout << "Marca: " << this->marca << endl;
    cout << "Motorizacao: " << this->motorizacao << endl;
    cout << "Cor: " << this->cor << endl;
    cout << "Valor: " << this->valor << endl;
}

void Carro::preencher(){
    cout << "Informe o nome: ";
    cin >> this->nome;
    cout << "Informe a marca: ";
    cin >> this->marca;
    cout << "Informe a motorizacao: ";
    cin >> this->motorizacao;
    cout << "Informe a cor: ";
    cin >> this->cor;
    cout << "Informe o valor: ";
    cin >> this->valor;
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
