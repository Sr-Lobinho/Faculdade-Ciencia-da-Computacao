#include <iostream>
using namespace std;

void preencheVet(int *vet, int tam){
	for (int i = 0; i < tam; i++){
		cout << "Informe o valor para o indice " << i << ": ";
		cin >> vet[i];
	}
}
int contaNum(int *vet, int tam, int num){
	int cont = 0;
	for (int i =0; i < tam; i++){
		if (vet[i] == num){
			cont++;
		}
	}
	return cont;
}
void anotaInd(int *vet, int *ind, int tam, int num){
	int a = 0;
	for (int i =0; i < tam; i++){
		if (vet[i] == num){
			ind[a++] = i;
		}
	}
}
void imprimeInd(int *ind, int tam){
	cout << "Indices em que o numero aparece [";
	for (int i = 0; i < tam-1; i++){
		cout << ind[i] << ", ";
	}
	cout << ind[tam-1] << "]" << endl;
}



int main(){
	int *vet;
	int *ind;
	int tam = 0, tamind = 0;
	int num = 0;
	
	do{
		cout << "Informe o tamanho do vetor: ";
		cin >> tam;
		if (tam < 0){
			cout << "Tamanho invalido!" << endl;
		}
	}while(tam < 0);
	vet = new int[tam];
	preencheVet(vet,tam);
	
	cout << "Informe um numero para procurar: ";
	cin >> num;
	tamind = contaNum(vet,tam,num);
	ind = new int[tamind];
	anotaInd(vet,ind,tam,num);
	imprimeInd(ind,tamind);
	
	return 0;
}
