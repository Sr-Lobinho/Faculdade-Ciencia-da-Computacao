#include <iostream> 
using namespace std;

void preencheMatriz(int **m, int lin, int col){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "Informe o valor para a linha " << i << " coluna " << j << ": ";
			cin >> m[i][j];
		}
	}
}
int somaMatriz(int **m, int lin, int col){
	int soma = 0;
	for (int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
			soma += m[i][j];
		}
	}
	return soma;
}
int main(){
	int **m;
	int lin, col;
	cout << "Informe a quantidade de linhas: ";
	cin >> lin;
	cout << "Informe a quantidade de colunas: ";
	cin >> col;
	m = new int*[lin];
	for (int i = 0; i < lin; i++){
		m[i] = new int[col];
	}
	
	preencheMatriz(m,lin,col);
	
	cout << "A soma dos elementos da matriz e: " << somaMatriz(m,lin,col) << endl;
	
	return 0;
}
