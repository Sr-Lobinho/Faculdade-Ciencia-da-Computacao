#include <cstdlib>
#include "Produto.h"
#include <iostream>

using namespace std;

int main() {
    Produto p;
    p.setPreco(25);
    
    cout << p.getPreco();
    return 0;
}

