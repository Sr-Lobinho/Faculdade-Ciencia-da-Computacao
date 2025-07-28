#include <iostream>
using namespace std;

void preencheMatriz(int **m, int lin, int col){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "Regiao " << i << ", Semana " << j << ": ";
			cin >> m[i][j];
		}
	}
}
void zeraVet(float *vet, int tam){
	for (int i = 0; i < tam; i++){
		vet[i] = 0;
	}
}
void totalVendaRegiao(int **m, int lin, int col){
	float *total = new float[lin];
	zeraVet(total,lin);
	cout << "Total de vendas por regiao: " << endl;
	for (int i = 0; i < lin; i++){
		for (int j = 0; j< col; j++){
			total[i] += m[i][j];
		}
		cout << "Regiao " << i << ": " << total[i] << endl;
	}
}

void totalEmediaSemana(int **m, int lin, int col){
	float *total = new float[col];
	zeraVet(total,lin);
	int menor = 0, menorind = 0;
	for (int i =0; i < lin; i++){
		for(int j =0; j <col; j++){
			total[j] += m[i][j];
			if (i == lin -1){
				if (j == 0){
					menor = total[j];
					menorind = j;
				}
				else if (total[j] < menor){
					menor = total[j];
					menorind = j;
				}
			}
		}
	}
	cout << "A Semana com menor vendas totais foi a semana " << menorind << " com " << menor << "vendas." << endl;
	
	cout << "Medias das semanas: " << endl;
	for (int i = 0; i < col; i++){
		total[i] /= lin;
		cout << "Semana " << i << ": " << total[i] << endl;
	}
}
int main(){
	int **m;
	int lin =4, col = 5;
	m = new int*[lin];
	for (int i = 0; i < lin; i++){
		m[i] = new int[col];
	}
	preencheMatriz(m,lin,col);
	totalVendaRegiao(m,lin,col);
	totalEmediaSemana(m,lin,col);
	
	return 0;
}
