#include <iostream>
using namespace std;

void votacao(int p){
	int v1 = 0 , v2 = 0 , v3 = 0, vn = 0, opc = 0;
	
	for (int i = 1; i <= p; i++){
		cout << "Candidatos         Cod." << endl;
		cout << "Candidato 1         1 " << endl;
		cout << "Candidato 2         2"  << endl;
		cout << "Candidato 3         3"  << endl;
		cout << "Nulo          Qualquer outro" << endl << endl;
		
		cout << "Pessoa " << i << ", informe seu voto: ";
		cin >> opc;
		
		switch (opc){
			case 1:
				v1++;
				cout << "Voto para o Candidato 1!" << endl;
				break;
			case 2:
				v2++;
				cout << "Voto para o Candidato 2!" << endl;
				break;
			case 3:
				v3++;
				cout << "Voto para o Candidato 3!" << endl;
				break;
			default:
				vn++;
				cout << "Voto anulado!" << endl;
		}
		cout << endl;	
	}
	
	cout << "\033[91mCandidato 1: " << v1 << " votos." << endl << "\033[92mCandidato 2: " << v2 << " votos." << endl << "\033[93mCandidato 3: " << v3 << " votos." << endl << "\033[90mVotos anulados: " << vn << endl;
	

}


int main(){
	int p = 0;
	cout << "Informe quantas pessoas irao votar: ";
	cin >> p;
	votacao(p);
	
	return 0;
}
