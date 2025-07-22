#include <iostream>
using namespace std;

void preencheMatriz(int **m, int tam, int inst){
	for(int i = 0; i < tam; i ++){
		for (int j = 0; j < tam; j++){
			cout << "m" << inst << "[" << i << "][" << j << "]: ";
			cin  >> m[i][j];
		}
	}
}

int somaTriangular(int **m, int tam){
	int soma = 0;
	cout << "Matriz triangular: " << endl;
	for (int i = 0; i < tam; i ++){
		for (int j = 0; j < tam; j++){
			if (i >= j){
				soma += m[i][j];
				cout << m[i][j] << "\t";
			}
			else{
				cout << 0 << "\t";
			}	
		}
		cout << endl;
	}
	
	return soma;
}

void somaMaior(int **m1, int tam1, int **m2, int tam2){
	int soma1 = 0, soma2 = 0;
	for (int i = 0; i < tam1; i ++){
		for (int j =0; j < tam1; j++){
			if (i != 0 and j != 1){
				soma1 += m1[i][j];
			}
		}
	}
	for (int i = 0; i < tam2; i ++){
		for (int j =0; j < tam2; j++){
			if (i != 0 and j != 1){
				soma2 += m2[i][j];
			}
		}
	}
	if (soma1 > soma2){
		cout << "A soma da Matriz 1 e maior." << endl;
	}
	else if (soma2 > soma1){
		cout << "A soma da Matriz 2 e maior." << endl;
	}
	else{
		cout << "As somas das duas matrizes sao iguais." << endl;
	}
}

void zeraVet(int *vet, int tam){
	for (int i = 0; i < tam; i ++){
		vet[i] = 0;
	}
}

void substituiNum(int **m, int tam, int num){
	int *vet = new int[tam];
	zeraVet(vet,tam);
	for (int i = 0; i < tam; i ++){
		for (int j = 0; j < tam; j ++){
			if (m[i][j] == num){
				m[i][j] = 0;
				vet[j] += 1;
			}
		}
	}
	int maior = 0, maiorid = 0;
	for (int i = 0; i < tam; i++){
		if (vet[i] > maior){
			maior = vet[i];
			maiorid = i;
		}
	}
	cout << "A coluna com mais substituicoes foi a coluna " << maiorid+1<< endl;
}

int main(){
	int **m1;
	int **m2;
	int tam1, tam2;
	cout << "Informe o tamanho da Matriz 1: ";
	cin >> tam1;
	cout << "Informe o tamanho da Matriz 2: ";
	cin >> tam2;
	m1 = new int *[tam1];
	m2 = new int *[tam2];
	for (int i = 0; i < tam1; i++){
		m1[i] = new int[tam1];
	}
	for (int i = 0; i < tam2; i++){
		m2[i] = new int[tam2];
	}
	preencheMatriz(m1,tam1,1);
	preencheMatriz(m2,tam2,2);
	
	int somat = somaTriangular(m1,tam1);
	cout << "Soma triangular da Matriz 1: " << somat << endl;
	somaMaior(m1,tam1,m2,tam2);
	int num;
	cout << "Informe o numero que desesa substituir na Matriz 2: ";
	cin >> num;
	substituiNum(m2,tam2,num);
	return 0;
}
