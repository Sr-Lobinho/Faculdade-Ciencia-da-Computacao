#include <iostream>
using namespace std;

void preencheMatriz(float **matriz, int lin, int col){
	for (int l = 0; l < lin; l++){
		for(int c = 0; c < col; c++){
			cout << "Informe o valor pra linha " << l << " coluna " << c << ": ";
			cin >> matriz[l][c]; 
		}
	}
	cout << endl;
}
float somaMatriz(float **matriz, int lin, int col){
	float soma = 0;
	for (int l = 0; l < lin; l++){
		for (int c = 0; c < col; c++){
			soma += matriz[l][c];
		}
	}
	
	return soma;
}


int main(){
	float **matriz;
	float soma = 0;
	int lin = 0, col = 0;
	cout << "Informe a quantidade de linhas: ";
	cin >> lin;
	cout << "Informe a quantidade de colunas: ";
	cin >> col;
	
	matriz = new float*[lin];
	for (int l = 0; l < lin; l++){
		matriz[l] = new float[col];
	}
	preencheMatriz(matriz,lin,col);
	
	soma = somaMatriz(matriz,lin,col);
	cout << "Soma: " << soma << endl;
	
	return 0;
}
