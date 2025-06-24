#include <iostream>
using namespace std;

void preencheMaior(float *vetmaior, float *vetmenor, int tamaior, int tamenor){
	float soma = 0;
	for (int i = 0; i < tamaior; i++){
		if (i < tamenor){
			vetmaior[i] = vetmenor[i];
		}
		else{
			vetmaior[i] = 5;
		}
		soma += vetmaior[i];
	}
	
	cout << "Soma: " << soma << endl;
	
}

int main(){
	float *vetmaior;
	float *vetmenor;
	int tamaior =0, tamenor =0;
	cout << "Informe o tamanho do vetor menor: ";
	cin >> tamenor;
	do{
		cout << "Informe o tamanho do vetor maior: ";
		cin >> tamaior;
		if (tamaior <= tamenor){
			cout << "Valor invalido!" << endl;
		}
	}while (tamaior <= tamenor);
	vetmaior = new float[tamaior];
	vetmenor = new float[tamenor];
	for (int i = 0; i < tamenor; i++){
		cout << "Informe um numero para a posicao " << i << ": ";
		cin >> vetmenor[i];
	}
	preencheMaior(vetmaior,vetmenor,tamaior,tamenor);
	return 0;
}
