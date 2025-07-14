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
void preencheMatrizIdent(int **mind, int lin, int col){
	for(int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
			if (i == j){
				mind[i][j] = 1;
			}
			else{
				mind[i][j] = 0;
			}
		}
	}
}
void verificaMatrizIdent(int **m, int lin, int col){
	int **matind = new int*[lin];
	int cont = 0;
	for(int i = 0; i < lin; i++){
		matind[i] = new int[col];
	}
	preencheMatrizIdent(matind,lin,col);
	for(int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
			if(m[i][j] == matind[i][j]){
				cont++;
			}
		}
	}
	if (cont == (lin*col)){
		cout << "A matriz e uma matriz identidade!"<<endl;
	}
	else{
		cout << "A matriz nao e uma matriz identidade!" << endl;
	}	
}


int main(){
	int **m;
	int lin = 0, col = 0;
	cout << "Informe a quantidade de linhas: ";
	cin >> lin;
	cout << "Informe a quantidade de colunas: ";
	cin >> col;
	m = new int*[lin];
	for(int i =0; i < lin; i ++){
		m[i] = new int[col];
	}
	preencheMatriz(m,lin,col);
	verificaMatrizIdent(m,lin,col);
	
	
	return 0;
}
