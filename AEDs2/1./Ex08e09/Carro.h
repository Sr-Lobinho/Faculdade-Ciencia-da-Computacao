
#include <string>
using namespace std;

class Carro{
    private:
        string nome;
        string marca;
        string motorizacao;
        string cor;
        float valor;
    public:
        Carro();
        Carro(Carro & outro);

        void imprimir();
        void preencher();

        void setNome(string nome);
        string getNome();
        void setMarca(string marca);
        string getMarca();
        void setMotorizacao(string motorizacao);
        string getMotorizacao();
        void setCor(string cor);
        string getCor();
        void setValor(float valor);
        float getValor();


};
