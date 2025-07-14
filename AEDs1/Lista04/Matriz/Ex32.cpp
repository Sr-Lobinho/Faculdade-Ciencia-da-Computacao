#include <iostream>
using namespace std;

void preencheMatriz(int **matriz, int lin, int col, int inst){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "m"<<inst<<"[" << i << "][" << j << "] : ";
			cin >> matriz[i][j];
		}
	}
}
int **somaMatriz(int **m1, int **m2, int lin, int col){
	int **soma = new int*[lin];
	for (int i = 0; i < lin; i ++){
		soma[i] = new int[col];
	}
	
	for(int i = 0; i < lin; i++){
		for (int j = 0; j<col; j++){
			soma[i][j] = m1[i][j] + m2[i][j];
		}
	}
	
	return soma;
}
void imprimeMatriz(int **matriz, int lin, int col){
	for (int l = 0; l < lin; l++){
		for(int c = 0; c < col; c++){
			cout << matriz[l][c] << "\t";
		}
		cout << endl;
	}	
}

int main(){
	int **mat1;
	int **mat2;
	int **matsoma;
	int lin = 0, col = 0;
	cout << "Informe a quantidade de linhas: ";
	cin >> lin;
	cout << "Informe a quantidade de colunas: ";
	cin >> col;
	mat1 = new int*[lin];
	mat2 = new int*[lin];
	for (int i = 0; i < lin; i ++){
		mat1[i] = new int[col];
		mat2[i] = new int[col];
	}
	preencheMatriz(mat1,lin,col,1);
	preencheMatriz(mat2,lin,col,2);
	matsoma = somaMatriz(mat1,mat2,lin,col);
	
	cout << "Soma das matrizes: " << endl;
	imprimeMatriz(matsoma,lin,col);
	return 0;
}
