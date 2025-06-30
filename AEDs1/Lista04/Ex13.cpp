#include <iostream>
using namespace std;

void leNota(int *notas, float *freq){
	for (int i = 0; i < 80; i++){
		do{
			cout << "Informe a nota do aluno " << i+1 << ": ";
			cin >> notas[i];
			if (notas[i] < 0 or notas[i] > 10){
				cout << "Nota invalida!" << endl << endl;
			}
			freq[i] =0;
		}while(notas[i] < 0 or notas[i] > 10);
	}
}
void calculaFrequencia(int *notas, float *freq){
	for (int i = 0; i < 80; i++){
		for (int j = 0; j < 80; j++){
			if(notas[i] == notas[j]){
				freq[i] += 1;
			}
		}
	}
}

void imprimeNotas(int *notas, float *freq){
	cout << "Aluno    Nota    FreqA    FreqR" << endl;
	for (int i = 0; i < 80; i++){
		cout << "  " << i+1 << "       " << notas[i] << "       " << freq[i] << "       " << freq[i]/80 << endl;
	}
	
}

int main(){
	int *notas = new int[80];
	float *freq = new float[80];
	leNota(notas, freq);
	calculaFrequencia(notas, freq);
	imprimeNotas(notas, freq);
	
	return 0;
}
