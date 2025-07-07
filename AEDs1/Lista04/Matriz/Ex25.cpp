#include <iostream>
using namespace std;

void preencheMatriz(int **matriz, int lin, int col){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "m[" << i << "][" << j << "] : ";
			cin >> matriz[i][j];
		}
	}
}

int calculaDet(int **m){
	int a = (m[0][0] * m[1][1] * m[2][2]) + (m[0][1] * m[1][2] * m[2][0]) + (m[0][2] * m[1][0] * m[2][1]);
	int b = (m[0][2] * m[1][1] * m[2][0]) + (m[0][0] * m[1][2] * m[2][1]) + (m[0][1] * m[1][0] * m[2][2]);
	
	return a - b;
}
int main(){
	int **matriz;
	int lin = 3, col = 3;
	int det = 0;
	matriz = new int*[lin];
	for (int i = 0; i < lin; i ++){
		matriz[i] = new int[col];
	}
	preencheMatriz(matriz,lin,col);
	
	det = calculaDet(matriz);
	cout << "O determinante da matriz e: " << det << endl;
	
	return 0;
	
}
