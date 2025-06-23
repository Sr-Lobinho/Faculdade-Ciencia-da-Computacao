#include <iostream>
using namespace std;

void preencheNotas(float * vetor, int tam){
	for (int i = 0; i < tam; i++){
	cout << "Informe a nota " << i+1 << ": ";
	cin >> vetor[i];
	}
}
void imprimeNotas(float *vetor, int tam){
	cout << "Notas: ";
	for (int i = 0; i < tam-1; i++){
		cout << vetor[i] << ", ";
	}
	cout << vetor[tam-1] << "." << endl;
}


int main(){
	float *notas;
	int n;
	cout << "Informe o tamanho: ";
	cin >> n;
	notas = new float[n];
	preencheNotas(notas, n);
	imprimeNotas(notas, n);
	
	return 0;
}
