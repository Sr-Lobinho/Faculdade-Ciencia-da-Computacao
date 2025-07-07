#include <iostream>
using namespace std;

void leNum(int *vet){
	for (int i = 0; i < 7; i++){
		cout << "Informe um numero para a posicao " << i << ": ";
		cin >> vet[i];
	}
}

void trocaNum(int *vet){
	int aux =0;
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 7; j++){
			if (j+1 == 7){
				cout;
			}
			else if (vet[j+1] < vet[j]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
} 

void imprimeNum(int *vet){
	cout << "Vetor: ";
	for (int i = 0; i < 6; i++){
		cout << vet[i] << ", ";
	}
	cout << vet[6] << "." << endl;
}

int main(){
	int *vet = new int[7];
	leNum(vet);
	
	trocaNum(vet);
	imprimeNum(vet);
	return 0;
}
