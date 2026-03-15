#include <iostream>
#include <cstdlib>
#include "Carro.h"

using namespace std;

void verificaMotorizacao(Carro *C){
    cout << "Carros com motorizacao acima de 1.0: " << endl;
    for (int i = 0; i < 3; i++){
        if (C[i].getMotorizacao() >= 1.0){
            cout << C[i].getNome() << endl;
        }
    }
}

void verificaMarcaIgual(Carro *C){
    cout << "Carros que tem a mesma Marca: ";
    if (C[0].getMarca() == C[1].getMarca()){
        if (C[1].getMarca() == C[2].getMarca()){
            cout << C[0].getNome() << ", " << C[1].getNome() << ", " << c[2].getNome() << endl;
        }
        else{
            cout << C[0].getNome() << ", " << C[1].getNome() << endl;
        }
    }
    else if (C[1].getMarca() == C[2].getMarca()){
        cout << C[1].getNome() << ", " << C[2].getNome() << endl;
    }
    else{
        cout << "Nenhum" << endl;
    }  
}

void calculaPorcentagemDoValor(Carro *C){
    Carro caro;
    
    for(int i = 0; i < 3; i++){
        if (C[i].getValor() > caro.getValor()){
            caro.copiar(C[i]);
        }
    }
    for (int i = 0; i < 3; i++){
        if (C[i].getValor() < caro.getValor()){
            float porcentagem = caro.getValor() - C[i].getValor();
            porcentagem *= 100/C[i].getValor();
            
            cout << caro.getNome() << " e " << porcentagem << "% maior que " << C[i].getNome() << endl;
        }
    }
    
}

int main() {
    Carro *Carros = new Carro[3];
    for (int i = 0; i < 3; i++){
        Carros[i].preencher();
    }
    
    verificaMotorizacao(Carros);
    verificaMarcaIgual(Carros);
    calculaPorcentagemDoValor(Carros);
    
    return 0;
}

