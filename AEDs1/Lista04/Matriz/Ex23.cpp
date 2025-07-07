#include <iostream>
using namespace std;

void preencheMatriz(float **matriz, int lin, int col){
	for (int l = 0; l < lin; l++){
		for(int c = 0; c < col; c++){
			cout << "m [" << l << "][" << c << "] : ";
			cin >> matriz[l][c]; 
		}
	}
}
void imprimeMatriz(float **matriz, int lin, int col){
	for (int l = 0; l < lin; l++){
		for(int c = 0; c < col; c++){
			cout << matriz[l][c] << "\t";
		}
		cout << endl;
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
	imprimeMatriz(matriz,lin,col);
	return 0;
}
