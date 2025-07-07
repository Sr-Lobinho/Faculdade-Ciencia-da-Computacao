#include <iostream>
using namespace std;

void armazenaImpar(int *vet){
	int aux = 1;
	for (int i = 0; i <100; i++){
		vet[i] = aux;
		aux += 2;
	}
}

void imprimeNum(int *vet){
	cout << "Vetor = [";
	for (int i = 0; i < 99; i++){
		cout << vet[i] << ", ";
	}
	cout << vet[99] << "]" << endl;
}

int main(){
	int *vet = new int[100];
	armazenaImpar(vet);
	imprimeNum(vet);
	return 0;
}
