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
int contaMaior(float **matriz, int lin, int col, float num){
	int cont = 0;
	for (int l = 0; l < lin; l++){
		for (int c = 0; c < col; c++){
			if(matriz[l][c] > num){
				cont++;
			}
		}
	}
	
	
	return cont;
}


int main(){
	float **matriz;
	float num = 0;
	int lin = 0, col = 0, cont = 0;
	cout << "Informe o tanto de linhas: ";
	cin >> lin;
	cout << "Informe o tanto de colunas: ";
	cin >> col;
	
	matriz = new float*[lin];
	for (int l = 0; l < lin; l++){
		matriz[l] = new float[col];
	}
	
	preencheMatriz(matriz,lin,col);

	cout << "Informe o numero para checar: ";
	cin >> num;
	
	cont =  contaMaior(matriz,lin,col,num);
	cout << "Existem " << cont << " valores maiores que " << num << " na matriz";
	
	return 0;
}
