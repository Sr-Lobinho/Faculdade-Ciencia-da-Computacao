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

bool verificaIgual(int **m, int lin, int col){
	for (int i = 0; i < lin; i++){
		for (int j = 0; j < col; j++){
			int cont = 0;
			
			for (int p = 0; p < lin; p++){
				for (int q = 0; q < col; q++){
					if(m[i][j] == m[p][q]){
						cont++;
					}
				}
			}
			
			if (cont > 1){
				return true;
			}
		}
	}
	return false;
}
int main(){
	int **m;
	int lin,col;
	cout << "Informe a quantidade de linhas: ";
	cin >> lin;
	cout << "Informe a quantidade de colunas: ";
	cin >> col;
	m = new int*[lin];
	for (int i = 0; i < lin; i++){
		m[i] = new int[col];
	}
	preencheMatriz(m,lin,col);
	bool temIgual = verificaIgual(m,lin,col);
	
	if (temIgual){
		cout << "A Matriz tem elementos repetidos" << endl;
	}
	else{
		cout << "A Matriz nao tem elementos repetidos" << endl;
	}
	return 0;
}
