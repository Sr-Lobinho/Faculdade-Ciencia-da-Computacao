#include <iostream>
using namespace std;

void menu(){
	cout << "-------------------------" << endl;
	cout << "       Cedula digital    " << endl;
	cout << "-------------------------" << endl;
	cout << "1 - Candidato A" << endl;
	cout << "2 - Candidato B" << endl;
	cout << "3 - Candidato C" << endl;
	cout << "4 - Voto Nulo" << endl;
	cout << "5 - Voto em Branco" << endl;
	cout << "0 - Sair " << endl;
	cout << "------------------------" << endl << endl;
	cout << "Escolha uma Opcao: ";
}
void votacao(){
	int v1 = 0 , v2 = 0 , v3 = 0, vb = 0, vn = 0, opc = 0, total = 0;
	
	do{
		menu();
		cin >> opc;
		
		switch (opc){
			case 1:
				v1++;
				break;
			case 2:
				v2++;
				break;
			case 3:
				v3++;
				break;
			case 4:
				vn++;
				break;
			case 5:
				vb++;
				break;
			case 0:
				cout << "Fim da votacao!" << endl;
				total--;
				break;
			default:
				cout << "Opcao invalida!" << endl;
				total--;		
		}
		total++;
		cout << endl;
	}while(opc != 0);
	
	cout << "Candidato A: " << v1 << " votos." << endl;  
	cout << "Candidato B: " << v2 << " votos." << endl;
	cout << "Candidato C: " << v3 << " votos." << endl;
	cout << "Nulos: " << vn << " votos." << endl;
	cout << "Em branco: " << vb << " votos." << endl;
	cout << "Percentagem de votos Nulos: " << (vn * 100)/total << "%" << endl;
	cout << "Percentagem de votos em Branco: " << (vb * 100)/total << "%" << endl;
}


int main(){
	votacao();
	
	return 0;
}
