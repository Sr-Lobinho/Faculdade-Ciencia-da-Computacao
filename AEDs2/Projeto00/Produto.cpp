#include "Produto.h"

Produto::Produto() {
    codigo = -1;
    preco = 0.0;
    custo = 0.0;
    estoque = 0;
}

Produto::Produto(const Produto& orig) {
}

void Produto::setPreco(float preco){
    this->preco = preco;
}

float Produto::getPreco(){
    return this->preco;
}

Produto::~Produto() {
}


