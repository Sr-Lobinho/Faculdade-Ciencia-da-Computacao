#include <iostream>
using namespace std;

void comparaMuito(){
	int cod = 0, codmaia =0, codmaip = 0, codmena = 0, codmenp = 0, cont = 1;
	float a = 0, p = 0, maiora = 0, maiorp = 0, menora = 0, menorp = 0;
	while (true){
		cout << "Informe o codigo(0 para parar): ";
		cin >> cod;
		if (cod == 0){
			break;
		}
		cout << "Informe a altura: ";
		cin >> a;
		cout << "Informe o peso: ";
		cin >> p;
		
		if (cont == 1){
			codmaia = cod;
			codmaip = cod;
			codmena = cod;
			codmenp = cod;
			
			maiora = a;
			maiorp = p;
			menora = a;
			menorp = p;
			
			cont++;
		}
		
		if(a >= maiora){
			maiora = a;
			codmaia = cod;
		}
		else if(a <= menora){
			menora = a;
			codmena = cod;
		}
		if (p >= maiorp){
			maiorp = p;
			codmaip = cod;
		}
		else if(p <= menorp){
			menorp = p;
			codmenp = cod;
		}
		cout << endl;
	}
	
	
	cout << "Mais alto: " << codmaia << " altura: " << maiora << endl;
	cout << "Mais baixo: " << codmena << " altura: " << menora << endl;
	
	cout << "Mais gordo: " << codmaip << " peso: " << maiorp << endl;
	cout << "Mais magro: " << codmenp << " peso: " << menorp << endl;
	
	
}
int main(){
	comparaMuito();
	return 0;
}
