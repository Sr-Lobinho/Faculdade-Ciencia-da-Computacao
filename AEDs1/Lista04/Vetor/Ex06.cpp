#include <iostream>
using namespace std;

void armazenaNum(int *vet){
	for (int i = 0; i < 51; i++){
		vet[i] = i;
	}
}

void imprimeNum(int *vet){
	cout << "Vetor: ";
	for (int i = 0; i < 50; i++){
		cout << vet[i] << ", ";
	}
	cout << vet[50] << "." << endl;
}

int main(){
	int *vet = new int[51];
	armazenaNum(vet);
	imprimeNum(vet);
	return 0;
}
