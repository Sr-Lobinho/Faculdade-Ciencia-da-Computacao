#include <iostream>
using namespace std;

void preencheMatriz(double **matriz, int lin, int col){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "m[" << i << "][" << j << "] : ";
			cin >> matriz[i][j];
		}
	}
}
double **transporMatriz(double **m, int l, int c){
	double **mt;
	int lin = c;
	int col = l;
	mt = new double*[lin];
	for(int i = 0; i < lin; i++){
		mt[i] = new double[col];
	}
	
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			mt[i][j] = m[j][i];
		}
	}
	return mt;
}

double calculaDet2(double **m){
	double a = m[0][0]*m[1][1];
	double b = m[0][1]*m[1][0];
	
	return a - b;
}

void preencheMatriz2(double **matriz, double **matriz2, int lin, int col,int ind1, int ind2){
	int j2 = 0;
	int i2 = 0;
	for (int i = 0; i < lin; i++){
		if (i != ind1){
			for(int j = 0; j < col; j++){
				if(j != ind2){
					matriz2[i2][j2] = matriz[i][j];
					j2++;
				}
			}
			i2++;
		}
		j2 = 0;
	}
}

double **matrizCofatores(double **m,int lin, int col){
	double **matrizcof;
	double **matriz2 = new double*[2];
	matrizcof = new double*[lin];
	for(int i = 0; i < lin; i ++){
		if(i < 2){
			matriz2[i] = new double[2];
		}
		matrizcof[i] = new double[col];
	}
	for(int i = 0; i < lin; i ++){
		for(int j = 0; j < col; j++){
			preencheMatriz2(m,matriz2,lin,col,i,j);
			
			if ((i+j)%2 != 0){
				matrizcof[i][j] = -1 * calculaDet2(matriz2);
			}
			else{
				matrizcof[i][j] = calculaDet2(matriz2);
			}
		}
	}
	
	
	return matrizcof;
}


double calculaDet3(double **m, int lin, int col){
	double **m2 = new double*[2];
	double *C = new double[lin];
	double *a = new double[lin];
	double conta = 0;
	for (int i = 0; i < 2; i++){
		m2[i] = new double[2];
	}
	
	
	for (int i = 0; i < col; i++){
		a[i] = m[0][i];
		preencheMatriz2(m,m2,lin,col,0,i);
		if (i% 2 != 0){
			C[i] = -1 * calculaDet2(m2);
		}
		else{
			C[i] = calculaDet2(m2);
		}
		//cout << "C" << i << "  " << C[i] << endl;
	}

	conta = (a[0] * C[0]) + (a[1] * C[1]) + (a[2] * C[2]);
	return conta;
}



double **preencheMatrizInv(double **m, int lin, int col){
	double **matrizinv;
	double **matrizcof;
	double **matrizadj;
	matrizinv = new double*[lin];
	for(int i = 0; i < lin; i++){
		matrizinv[i] = new double[col];
	}
	matrizcof = matrizCofatores(m,lin,col);
	matrizadj = transporMatriz(matrizcof,lin,col);
	
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			matrizinv[i][j] = (1/calculaDet3(m,lin,col) * matrizadj[i][j]);
		}
	}
	
	
	return matrizinv;
}

void imprimeMatriz(double **matriz, int lin, int col){
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
	double **matriz;
	double **matrizinv;
	int lin = 3, col = 3;
	double det = 0;
	matriz = new double*[lin];
	for (int i = 0; i < lin; i ++){
		matriz[i] = new double[col];
	}
	preencheMatriz(matriz,lin,col);
	imprimeMatriz(matriz,lin,col);
	det = calculaDet3(matriz,lin,col);
	if (det != 0){
		cout << "O determinante e diferente de 0!" << endl;
		matrizinv = preencheMatrizInv(matriz,lin,col);
		imprimeMatriz(matrizinv, lin, col);
	}
	else{
		cout << "O determinante e igual a 0!" << endl;
	}
	return 0;
	
}
