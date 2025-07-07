#include <iostream>
using namespace std;

void preencheMatriz(int **matriz, int lin, int col){
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "m[" << i << "][" << j << "] : ";
			cin >> matriz[i][j];
		}
	}
}
int calculaDet(int **matriz){
	int a = matriz[0][0] * matriz[1][1];
	int b = matriz[0][1] * matriz[1][0];
	return a-b;
}


int main(){
	int **matriz;
	int lin = 2, col = 2;
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
