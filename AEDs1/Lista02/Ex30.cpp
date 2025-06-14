#include <iostream>
using namespace std;

void imprimeTabela(){
	cout << "-----------Loja Quase Dois---------" << endl;
	for (int i = 1; i <= 50; i++){
		cout << i << " - R$" << 1.99 * i << endl;
	}
	
}
int main(){
	imprimeTabela();
	return 0;
}
