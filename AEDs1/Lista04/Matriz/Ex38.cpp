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
int contaElemento(int **m, int lin, int col){
	int c =0;
	
	for (int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
			if (i < j){
				c++;
			}
		}
	}
	
	return c;
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
	
	cout << "Tem " << contaElemento(m,lin,col) << " elementos acima da diagonal principal" << endl;
	
	return 0;
}
