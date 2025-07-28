#include <iostream>
using namespace std;

void preencheMatriz(int **m, int lin, int col){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "M[" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
	}
}

void zeraVet(float *vet, int tam){
	for (int i = 0; i < tam; i++){
		vet[i] = 0;
	}
}

float *calculaMediaCol(int **m, int lin, int col){
	float *medias = new float[col];
	zeraVet(medias,col);
	for (int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
			medias[j] += m[i][j];
		}
	}
	for (int i = 0; i < col; i++){
		medias[i] /= lin;
	}
	
	return medias;
}

int main(){
	int **m;
	int lin,col;
	cout << "Informe quantas linhas: ";
	cin >> lin;
	cout << "Informe quantas colunas: ";
	cin >> col;
	m = new int*[lin];
	for (int i = 0; i < lin; i++){
		m[i] = new int[col];
	}
	preencheMatriz(m,lin,col);
	
	float *medias = calculaMediaCol(m,lin,col);
	cout << "Medias: " << endl;
	for (int i = 0 ; i < col; i++){
		cout << "Coluna " << i+1 << ": " << medias[i] << endl;
	}
	
	return 0;
}
