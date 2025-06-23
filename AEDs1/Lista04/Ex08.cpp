#include <iostream>
using namespace std;

void leMetade(int *vet){
	for (int i = 0; i < 10; i++){
		cout << "Informe um numero para a posicao " << i << ": ";
		cin >> vet[i];
		vet[i] /= 2;
	}
}

void imprimeNum(int *vet){
	cout << "Vetor = [";
	for (int i = 0; i < 9; i++){
		cout << vet[i] << ", ";
	}
	cout << vet[9] << "]" << endl;
}

int main(){
	int *vet = new int[10];
	leMetade(vet);
	imprimeNum(vet);
	return 0;
}
