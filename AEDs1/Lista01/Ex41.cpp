#include <iostream>
using namespace std;

main(int argc, char** argv) {
	int cod, qntd = 0;
	float total = 0;
	cout << "Cod. Produto                Preco Unitario" << endl; 
	cout << "    1001                        R$5,32    " << endl;
	cout << "    1324                        R$6,45    " << endl;
	cout << "    6548                        R$2,37    " << endl;
	cout << "    0987                        R$5,32    " << endl;
	cout << "    7623                        R$6,45    " << endl << endl;
	
	cout << "Informe o codigo do produto: ";
	cin >> cod;
	
	cout << "Informe a quantidade desejada: ";
	cin >> qntd;
	
	switch(cod){
		case 1001:
			total = 5.32 * qntd;
			break;
		case 1324:
			total = 6.45 * qntd;
			break;
		case 6548:
			total = 2.37 * qntd;
			break;
		case 987:
			total = 5.32 * qntd;
			break;
		case 7623:
			total = 6.45 * qntd;
			break;
		default:
			cout << "Codigo nao existente!";
			
	}
	if (total != 0){
		cout << "O pedido vai custar R$" << total;
	} 
	
	
	
	return 0;
}
