#ifndef CARRO_H
#define CARRO_H


#include <string>
using namespace std;

class Carro{
    private:
        string nome;
        string marca;
        float motorizacao;
        string cor;
        float valor;
    public:
        Carro();
        Carro(Carro & outro);
        virtual ~Carro();

        void imprimir();
        void preencher();
        void copiar(Carro &outro);

        void setNome(string nome);
        string getNome();
        void setMarca(string marca);
        string getMarca();
        void setMotorizacao(float motorizacao);
        float getMotorizacao();
        void setCor(string cor);
        string getCor();
        void setValor(float valor);
        float getValor();


};

#endif 

