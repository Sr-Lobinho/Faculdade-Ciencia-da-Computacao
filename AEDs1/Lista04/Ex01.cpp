#include <iostream>
using namespace std;

void imprimeInverso(){
	int vet[5];
	for (int i = 0; i < 5; i++){
		cout << "Informe o numero "<< i << ": ";
		cin >> vet[i];
	}
	
	for (int i = 4; i >=0; i--){
		cout << vet[i] << " ";
	}
}
int main(int argc, char** argv) {
	imprimeInverso();
	return 0;
}
