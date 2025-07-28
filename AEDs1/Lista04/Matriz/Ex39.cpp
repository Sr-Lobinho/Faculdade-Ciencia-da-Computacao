#include <iostream>
using namespace std;

void preencheMatriz(int **m, int lin, int col, int inst){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "M"<< inst <<"[" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
	}
}

bool verificaMatrizes(int **m1, int **m2, int lin, int col){
	int c = 0;
	
	for (int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
			if (m1[i][j] == m2[i][j]){
				c++;
			}
		}
	}
	
	if (c == (lin*col)){
		return true;
	}
	else {
		return false;
	}
}

int main(){
	int **m1;
	int **m2;
	int lin,col;
	cout << "Informe a quantidade de linhas para as duas matrizes: ";
	cin >> lin;
	cout << "Informe a quantidade de colunas para as duas matrizes: ";
	cin >> col;
	m1 = new int*[lin];
	m2 = new int*[lin];
	for (int i = 0; i < lin; i++){
		m1[i] = new int[col];
		m2[i] = new int[col];
	}
	
	preencheMatriz(m1,lin,col,1);
	preencheMatriz(m2,lin,col,2);
	
	bool matrizIgual = verificaMatrizes(m1,m2,lin,col);
	
	if (matrizIgual){
		cout << "As duas matrizes sao iguais!" << endl;
	}
	else{
		cout << "As duas matrizes nao sao iguais!" << endl;
	}
	return 0;
}
