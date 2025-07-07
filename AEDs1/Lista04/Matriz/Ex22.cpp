#include <iostream>
using namespace std;

void preencheMatriz(float **matriz, int lin, int col){
	for (int l = 0; l < lin; l++){
		for(int c = 0; c < col; c++){
			cout << "Informe o valor pra linha " << l << " coluna " << c << ": ";
			cin >> matriz[l][c]; 
		}
	}
}
int main(){

	float **matriz;
	int lin = 0, col = 0;
	cout << "Informe o tanto de linhas: ";
	cin >> lin;
	cout << "Informe o tanto de colunas: ";
	cin >> col;
	
	matriz = new float*[lin];
	for (int l = 0; l < lin; l++){
		matriz[l] = new float[col];
	}
	
	preencheMatriz(matriz,lin,col);
	return 0;
}
