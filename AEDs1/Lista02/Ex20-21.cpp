#include <iostream>
using namespace std;

void calculaCoisa(){
	float n = 0, maior = 0, menor = 0, s = 0, i = 0; 
	while(true){
		do{
			cout << "Informe um numero(0 pra parar): ";
			cin >> n;
			if (n < 0 or n > 1000){
				cout << "Numero invalido" << endl;
			}
		}while(n < 0 or n > 1000);
		
		if (i == 0){
			maior = n;
			menor = n;
			i += 1;
		}
		if (n == 0){
			break;
		}
		else if (n > maior){
			maior = n;
		}
		else if (n < menor){
			menor = n;
		}
		s += n;
	}
	cout << "Maior valor: " << maior << endl;
	cout << "Menor valor: " << menor << endl;
	cout << "A soma dos valores: " << s << endl;
}
int main(){
	calculaCoisa();
	return 0;
}
