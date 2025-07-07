#include <iostream>
#include <math.h>
using namespace std;

void leRaiz(float *vet){
	float n = 0;
	for (int i = 0; i < 15; i++){
		cout << "Informe um numero para a posicao " << i << ": ";
		cin >> n;
        	if (n < 0){
            		vet[i] = -1;
        	}
        	else{
			vet[i] = sqrt(n);
       		}
	}
}

void imprimeNum(float *vet){
	cout << "Vetor = [";
	for (int i = 0; i < 14; i++){
		cout << vet[i] << ", ";
	}
	cout << vet[14] << "]" << endl;
}

int main(){
	float *vet = new float[15];
	leRaiz(vet);
	imprimeNum(vet);
	return 0;
}
