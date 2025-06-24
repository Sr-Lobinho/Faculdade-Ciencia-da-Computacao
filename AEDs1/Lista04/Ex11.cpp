#include <iostream>
#include <math.h>
using namespace std;

void leLog(float *vet){
	float n = 0;
	for (int i = 0; i < 8; i++){
		cout << "Informe um numero para a posicao " << i << ": ";
		cin >> n;
        if (n < 0){
            vet[i] = -1;
        }
        else{
		    vet[i] = log10(n);
        }
	}
}

void imprimeNum(float *vet){
	cout << "Vetor = [";
	for (int i = 0; i < 7; i++){
		cout << vet[i] << ", ";
	}
	cout << vet[7] << "]" << endl;
}

int main(){
	float *vet = new float[8];
	leLog(vet);
	imprimeNum(vet);
	return 0;
}
