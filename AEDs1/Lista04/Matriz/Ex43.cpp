#include <iostream>
using namespace std;

void preencheMatriz(int **m, int lin, int col){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "Produto " << i << ", Armazem " << j << ": ";
			cin >> m[i][j];
		}
	}
}
void zeraVet(int *vet, int tam){
	for (int i = 0; i < tam; i++){
		vet[i] = 0;
	}
}
void calculaTotalProdutos(int **m, int lin, int col){
	int *total = new int[lin];
	zeraVet(total,lin);
	cout << "Total dos produtos: " << endl;
	for (int i = 0; i < lin; i++){
		for (int j = 0; j< col; j++){
			total[i] += m[i][j];
		}
		if (total[i] == 0){
			cout << "Produto " << i << " esta esgotado em todos os armazens" << endl;
		}
		else{
			cout << "Produto " << i << ": " << total[i] << endl;
		}
	}
}

void verificaMaiorArmazem(int **m, int lin, int col){
	int *total = new int[col];
	int maior = 0, maiorind = 0;
	zeraVet(total,lin);
	for (int i = 0; i < lin; i++){
		for (int j = 0; j <col; j++){
			total[j] += m[i][j];
		}
	}
	for (int i = 0; i< col; i++){
		if (total[i] > maior){
			maior = total[i];
			maiorind = i;
		}
	}
	cout << "O Armazem " << maiorind << " tem a maior quantidade de produtos" << endl;
}

int main(){
	int **m;
	int lin = 3, col = 4;
	m = new int*[lin];
	for (int i = 0; i < lin; i++){
		m[i] = new int[col];
	}
	preencheMatriz(m,lin,col);
	calculaTotalProdutos(m,lin,col);
	verificaMaiorArmazem(m,lin,col);
	return 0;
}
