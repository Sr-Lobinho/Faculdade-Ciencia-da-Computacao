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
void preencheMatriz3(int **matriz, int **matriz3, int lin, int col, int ind){
	int j2 = 0;
	for (int i = 1; i < lin; i++){
		for(int j = 0; j < col; j++){
			if(j != ind){
				matriz3[i-1][j2] = matriz[i][j];
				//cout << "m3 "<< i-1 << " " << j2 << "   " << matriz3[i-1][j2] << endl;
				j2++;
			}
		}
		j2 = 0;
	}
	
}
int calculaDet3(int **m){
	int a = (m[0][0] * m[1][1] * m[2][2]) + (m[0][1] * m[1][2] * m[2][0]) + (m[0][2] * m[1][0] * m[2][1]);
	int b = (m[0][2] * m[1][1] * m[2][0]) + (m[0][0] * m[1][2] * m[2][1]) + (m[0][1] * m[1][0] * m[2][2]);
	
	return a - b;
}
int calculaDet4(int **m, int lin, int col){
	int **m3 = new int*[3];
	int *C = new int[lin];
	int *a = new int[lin];
	int conta = 0;
	for (int i = 0; i < 3; i++){
		m3[i] = new int[3];
	}
	
	
	for (int i = 0; i < col; i++){
		a[i] = m[0][i];
		preencheMatriz3(m,m3,lin,col,i);
		
		if (i% 2 != 0){
			C[i] = -1 * calculaDet3(m3);
		}
		else{
			C[i] = calculaDet3(m3);
		}
	}

	conta = (a[0] * C[0]) + (a[1] * C[1]) + (a[2] * C[2]) + (a[3] * C[3]);
	return conta;
}
int main(){
	int **matriz;
	int lin = 4, col = 4;
	int det = 0;
	matriz = new int*[lin];
	for (int i = 0; i < lin; i ++){
		matriz[i] = new int[col];
	}
	preencheMatriz(matriz,lin,col);
	
	det = calculaDet4(matriz,lin,col);
	cout << "O determinante da matriz e: " << det << endl;
	
	return 0;
	
}
