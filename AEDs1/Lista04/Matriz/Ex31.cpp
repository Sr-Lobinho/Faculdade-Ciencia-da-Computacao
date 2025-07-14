#include <iostream>
using namespace std;

int **transporMatriz(int **m, int tam){
	int **mt;
	mt = new int*[tam];
	for(int i = 0; i < tam; i++){
		mt[i] = new int[tam];
	}
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			mt[i][j] = m[j][i];
		}
	}
	return mt;
}
void imprimeMatriz(int **matriz, int tam){
	cout << endl;
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			cout << "[" << matriz[i][j] << "]\t";
		}
		cout << endl;
	}
	cout << endl;
}

void verificaMatriz(int **m, int tam){
	int cont = 0;
	int **mt;
	mt = transporMatriz(m,tam);
	for (int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			if(m[i][j] == mt[i][j]){
				cont++;
			}
		}
	}
	cout << "Normal: " << endl;
	imprimeMatriz(m,tam);
	cout << "Transposta: " << endl;
	imprimeMatriz(mt,tam);
	
	if(cont == (tam*tam)){
		cout << "A Matriz e simetrica!" << endl;
	}
	else{
		cout << "A Matriz nao e simetrica" << endl;
	}
}
void preencheMatriz(int **matriz, int tam){
	for (int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			cout << "m[" << i << "][" << j << "] : ";
			cin >> matriz[i][j];
		}
	}
}

int main(){
	int **matriz;
	int tam = 0;
	
	do{
		cout << "Informe o tamanho das linhas/colunas da matriz quadrada: ";
		cin >> tam;
		if(tam <= 0){
			cout << "Tamanho invalido!" << endl;
		}
	}while(tam <= 0);
	matriz = new int*[tam];
	for (int i = 0; i < tam; i ++){
		matriz[i] = new int[tam];
	}
	preencheMatriz(matriz,tam);
	verificaMatriz(matriz,tam);
	return 0;
}
