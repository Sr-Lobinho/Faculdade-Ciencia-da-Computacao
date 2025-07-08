#include <iostream>
using namespace std;

void zeraVet(int *vet, int tam){
	for(int i = 0; i < tam; i++){
		vet[i] = 0;
	}
}

void somaCol(int **matriz, int lin, int col){
	int *soma = new int[col];
	int maior = 0, maiorind = 0;
	zeraVet(soma,col);
	for(int i = 0; i < col; i++){
		for(int j = 0; j < lin; j++){
			soma[i] += matriz[j][i];
		}
	}
	for (int i = 0; i < col; i++){
		if (soma[i] > maior){
			maior = soma[i];
			maiorind = i;
		}
	}
	cout << "A coluna com o maior somatario e a " << maiorind << " Soma: " << maior << endl;
}
void somaLin(int **matriz, int lin, int col){
	int *soma = new int[lin];
	int maior = 0, maiorind = 0;
	zeraVet(soma,lin);
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			soma[i] += matriz[i][j];
		}
	}
	for (int i = 0; i < lin; i++){
		if (soma[i] > maior){
			maior = soma[i];
			maiorind = i;
		}
	}
	cout << "A linha com o maior somatorio e a " << maiorind << " Soma: " << maior << endl;
}
void troca10(int **matriz, int lin, int col){
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			if(matriz[i][j] > 10){
				matriz[i][j] = 10;
			}
		}
	}
}
void imprimeMatriz(int **matriz, int lin, int col){
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
	int lin = 6;
    int col = 6;
    int** terreno = new int*[lin];
    for (int i = 0; i < lin; i++) {
        terreno[i] = new int[col];
    }
	 int valores[6][7] = {
        {1, 3, 3, 5, 6, 7},
        {2, 1, 2, 5, 7, 9},
        {2, 4, 5, 9, 2, 15},
        {5, 8, 8, 2, 13, 12},
        {5, 6, 5, 8, 14, 16},
        {5, 5, 7, 12, 14, 15}
    };
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            terreno[i][j] = valores[i][j];
        }
    }
	imprimeMatriz(terreno,lin,col);
	somaCol(terreno,lin,col);
	somaLin(terreno,lin,col);
	troca10(terreno,lin,col);
	imprimeMatriz(terreno,lin,col);
	
	return 0;
}
