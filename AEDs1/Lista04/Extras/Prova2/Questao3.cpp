#include <iostream>
using namespace std;

void elevaVet(float *vet1, float* vet2, int tam){
	float menor = 0;
	for (int i = 0; i < tam; i++){
		vet2[i] = vet1[i] * vet1[i];
		if(i == 0){
			menor = vet2[i];
		}
		else if(vet2[i] < menor){
			menor = vet2[i];
		}
	}
	for(int i = 0; i < tam; i++){
		if (vet2[i] > (menor*2)){
			cout << vet2[i] << " ";
		}
	}
	cout << endl;
}

int main(){
	float *vet1;
	float *vet2;
	int tam = 0;
	do{
		cout << "Informe o tamanho: ";
		cin >> tam;
		if(tam <=0){
			cout << "Tamanho invalido." << endl;
		}
	}while(tam <= 0);
	vet1 = new float[tam];
	vet2 = new float[tam];
	for (int i = 0; i < tam; i++){
		cout << "Informe um valor para o indice " << i << ": ";
		cin >> vet1[i];
	}
	elevaVet(vet1,vet2,tam);
	
	
	cout << vet2[tam-1] << endl;
	
	
	return 0;
}
