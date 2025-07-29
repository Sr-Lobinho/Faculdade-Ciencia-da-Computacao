#include <iostream>
using namespace std;

void preencheMatriz(int **m, int tam, int inst){
	for (int i = 0; i < tam; i++){
		for (int j = 0; j <tam; j++){
			cout << "M" << inst << "[" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
	}
}

int contaPositivo(int **m, int tam){
	int c = 0;
	for (int i = 0; i < tam; i++){
		for (int j = 0; j< tam; j++){
			if (i % 2 != 0 and m[i][j] > 0){
				c++;
			}
		}
	}
	return c;
}
int somaPrincipal(int **m, int tam){
	int soma = 0;
	for (int i = 0; i < tam; i++){
		for (int j =0; j< tam; j++){
			if (j == i){
				soma += m[i][j];
			}
		}
	}
	return soma;
}
int multiplicaSecundaria(int **m, int tam){
	int produto = 1;
	for (int i =0; i< tam; i++){
		for (int j = 0; j< tam; j++){
			if (i+j == tam-1){
				produto *= m[i][j];
			}
		}
	}
	return produto;
}
bool comparaMatrizes (int **m1, int **m2, int tam1, int tam2){
	int soma1 = somaPrincipal(m1,tam1);
	int produto2 = multiplicaSecundaria(m2,tam2);
	if (soma1 > produto2){
		return true;
	}
	else{
		return false;
	}
}
int encontraNum(int **m, int tam, int n){
	for (int i = 0; i < tam; i++){
		for (int j =0; j < tam; j++){
			if (m[i][j] == n){
				return i;
			}
		}
	}
	return -1;
}
void sobreescreveMatriz(int **m, int tam, int c1, int c2){
	for (int i = 0; i < tam-1; i++){
		m[i][c1] = m[i][c2];
	}
}
int main(){
	int **m1;
	int **m2;
	int tam1,tam2;
	cout << "Informe o tamanho da matriz 1: ";
	cin >> tam1;
	cout << "Informe o tamanho da matriz 2: ";
	cin >> tam2;
	m1 = new int*[tam1];
	for(int i = 0; i < tam1; i++){
		m1[i] = new int[tam1];
	}
	preencheMatriz(m1,tam1,1);
	m2 = new int*[tam2];
	for(int i = 0; i < tam2; i++){
		m2[i] = new int[tam2];
	}
	preencheMatriz(m2,tam2,2);
	if (comparaMatrizes(m1,m2,tam1,tam2)){
		cout << "Soma" << endl;
	}
	else{
		cout << "Produto" << endl;
	}
	
	return 0;
}
