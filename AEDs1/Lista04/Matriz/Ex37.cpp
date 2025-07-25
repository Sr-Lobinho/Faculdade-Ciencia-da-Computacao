#include <iostream>
using namespace std;

int **transporMatriz(int **m, int l, int c){
	int **mt;
	int lin = c;
	int col = l;
	mt = new int*[lin];
	for(int i = 0; i < lin; i++){
		mt[i] = new int[col];
	}
	
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			if (m[j][i] > 0 and m[j][i] %2 == 0) {
				mt[i][j] = m[j][i] * -1;
			}
			else if(m[j][i] < 0 and m[j][i] %2 != 0){
				mt[i][j] = m[j][i] * -1;
			}
			else{
				mt[i][j] = m[j][i];
			}
		}
	}
	return mt;
}
void preencheMatriz(int **matriz, int lin, int col){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "m[" << i << "][" << j << "] : ";
			cin >> matriz[i][j];
		}
	}
}
void imprimeMatriz(int **matriz, int lin, int col){
	cout << endl;
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "[" << matriz[i][j] << "]\t";
		}
		cout << endl;
	}
	cout << endl;
}

int main(){
	int **matriz;
	int **matrizt;
	int lin = 0, col = 0;
	cout << "Informe o numero de linhas: ";
	cin >> lin;
	cout << "Informe o numero de colunas: ";
	cin >> col;
	matriz = new int*[lin];
	for ( int i = 0; i < lin; i ++){
		matriz[i] = new int[col];
	}
	preencheMatriz(matriz,lin,col);
	cout << "Matriz normal: " << endl;
	imprimeMatriz(matriz,lin,col);
	matrizt = transporMatriz(matriz,lin,col);
	cout << "Matriz transposta: " << endl;
	imprimeMatriz(matrizt,col,lin);
	return 0;
}
