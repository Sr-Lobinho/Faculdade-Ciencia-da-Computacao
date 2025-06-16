#include <iostream>
using namespace std;

void pesquisa(){
	float mediav = 0, mediaa =0;
	int cod = 0, codmen =0, codmai =0, a =0, maisa =0, menosa =0, v =0, ca =0;
	
	for (int i = 1; i <= 5; i++){
		cout << "Informe o codigo da cidade: ";
		cin >> cod;
		cout << "Informe o numero de veiculos de passeio: ";
		cin>> v;
		cout << "Informe o numero de acidentes com vitimas: ";
		cin >> a;
		
		if (i == 1){
			codmen = cod;
			codmai = cod;
			maisa = a;
			menosa = a;
			
		}
		else if (a >= maisa){
			maisa = a;
			codmai = cod;
		}
		else if (a <= menosa){
			codmen = cod;
			menosa = a;
		}
		
		if (v < 2000){
			mediaa += a;
			ca ++;	
		}
		mediav += v;
		
	}
	mediav /= 5;
	mediaa /= ca;
	
	cout << "Maior indice de acidentes: " << maisa << " Cidade: " << codmai<< endl;
	cout << "Menor indice de acidentes: " << menosa << " Cidade: " << codmen << endl;
	cout << "Media de veiculos: " << mediav << endl;
	cout << "Media de acidentes nas cidades com menos de 2000 veiculos de passeio: " << mediaa << endl;
	
	
}
int main(){
	pesquisa();
	return 0;
}
