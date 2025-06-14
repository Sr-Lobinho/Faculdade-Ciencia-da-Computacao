#include <iostream>
using namespace std;

void imprimeTabelinha(float p){
	cout << "---------Panificadora Pao Duro---------" << endl;
	for (int i = 1; i <= 50; i++){
		cout << i << " - R$" << p * i << endl;
	}
	
}
int main(){
	float p =0;
	cout << "Informe o preco da unidade: ";
	cin >> p;
	imprimeTabelinha(p);
	return 0;
}
