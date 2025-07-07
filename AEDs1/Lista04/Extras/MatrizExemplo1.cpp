#include <iostream:
using namespace std;

void preencheMatriz(float **matriz, int lin, int col){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "Informe o valor pra linha " << i << " coluna " << j << ": ";
			cin >> matriz[i][j]; 
		}
	}
}
void imprimeMatriz(float **matriz, int lin, int col){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}	
}
int main(){
	float **matriz;
	int lin = 0, col = 0;
	cout << "Informe o tanto de linhas: ";
	cin >> lin;
	cout << "Informe o tanto de colunas: ";
	cin >> col;
	
	matriz = new float*[lin];
	for (int i = 0; i < lin; i++){
		matriz[i] = new float[col];
	}
	
	preencheMatriz(matriz,lin,col);
	imprimeMatriz(matriz,lin,col);
	
	return 0;
}
