#ifndef PRODUTO_H
#define PRODUTO_H

class Produto {
public:
    Produto();
    Produto(const Produto& orig);
    virtual ~Produto();
    void setPreco(float preco);
    float getPreco();
    
private:
    int codigo;
    float preco;
    float custo;
    int estoque;

};

#endif /* PRODUTO_H */

