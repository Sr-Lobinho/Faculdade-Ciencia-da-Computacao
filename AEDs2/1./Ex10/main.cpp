#include <iostream>
#include "Livro.h"

using namespace std;


int main(){
	Livro L1, L2;
	L1.preencher();
	L2.preencher();
	
	if (L1.getPaginas() > L2.getPaginas()){
		cout << "O Livro " << L1.getNome() << " tem mais paginas" << endl;
	}
	else if (L2.getPaginas() > L1.getPaginas()){
		cout << "O Livro " << L2.getNome() << " tem mais paginas" << endl;
	}
	else{
		cout << "Ambos tem a mesma quantidade de paginas" << endl;
	}
	return 0;
}
