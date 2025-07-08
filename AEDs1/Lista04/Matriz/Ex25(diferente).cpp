#include <iostream>
using namespace std;

void preencheMatriz(int **matriz, int lin, int col){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			if (j > 2){
				matriz[i][j] = matriz[i][j-3];
			}
			else{
				cout << "m[" << i << "][" << j << "] : ";
				cin >> matriz[i][j];
			}
		}
	}
}
void planificaVetor(int *vet){
	for (int i = 0; i < 6; i++){
		vet[i] = 1;
	}
	
}

/* 00 01 02  03 04 
   10 11 12  13 14
   20 21 22  23 24
*/
int calculaDet(int **m, int lin, int col){
	int det = 0;
	int *vet = new int[6];
	planificaVetor(vet);
	for (int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
			if (i == j){
				vet[0] *= m[i][j];
			}
			if (j == i+1){
				vet[1] *= m[i][j];
			}
			if ((j-i) == 2){
				vet[2] *= m[i][j];
			}
			
			if ((i+j) == 2){
				vet[3] *= m[i][j];
			}
			if ((i+j) == 3){
				vet[4] *= m[i][j];
			}
			if ((i+j) == 4){
				vet[5] *= m[i][j];
			}
		}
	}
	det += vet[0] + vet[1] + vet[2];
	det -= (vet[3]+vet[4]+vet[5]);
	return det;
}
int main(){
	int **matriz;
	int lin = 3, col = 5;
	int det = 0;
	matriz = new int*[lin];
	for (int i = 0; i < lin; i ++){
		matriz[i] = new int[col];
	}
	preencheMatriz(matriz,lin,col);
	
	det = calculaDet(matriz, lin, col);
	cout << "O determinante da matriz e: " << det << endl;
	
	return 0;
	
}
