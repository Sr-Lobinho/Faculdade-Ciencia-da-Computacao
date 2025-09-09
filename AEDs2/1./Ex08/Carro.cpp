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

