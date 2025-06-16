#include <iostream>
using namespace std;

void imprimeTabela(){
	float divida = 0, jurosper = 0, total = 0, juros = 0;
	cout << "Informe a divida: ";
	cin >> divida;
	
	cout << "Valor da divida - Valor dos Juros - Qtd de Parcelas - Valor da Parcela" << endl;
	cout << "    R$ " << divida << "             " << 0 << "                 " << 1 << "                 "  << divida << endl;
	
	for (int i = 3; i <= 12; i += 3){
		if (i == 3){
			jurosper = 10;
		}
		else{
			jurosper += 5;
		}
		juros = divida * (jurosper/100);
		total = divida + juros;

		cout << "    R$ " << total << "             " << juros << "               " << i << "                 "  << total/i << endl;
	}
	
}
int main(){
	imprimeTabela();
	return 0;
}
