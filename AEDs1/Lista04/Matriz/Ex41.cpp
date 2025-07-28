#include <iostream>
using namespace std;

void preencheMatriz(int **m, int tam){
	for (int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			cout << "M[" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
	}
}

int somaDiagonais(int **m, int tam){
	int soma = 0;
	for (int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++){
			if (i == j){
				soma += m[i][j];
			}
			if (i + j == tam - 1){
				soma += m[i][j];
			}
		}
	}
	
	return soma;
}
int main(){
	int **m;
	int tam;
	cout << "Informe o tamanho da matriz quadrada: ";
	cin >> tam;
	m = new int*[tam];
	for (int i = 0; i < tam; i++){
		m[i] = new int[tam];
	}
	preencheMatriz(m,tam);
	
	cout << "Soma das diagonais: " << somaDiagonais(m,tam) << endl;
	
	return 0;
}
