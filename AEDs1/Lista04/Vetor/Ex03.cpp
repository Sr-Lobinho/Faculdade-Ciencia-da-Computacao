#include <iostream>
using namespace std;

void leNum(int *vet){
	for (int i = 0; i < 20; i++){
		do{
			cout << "Informe um numero positivo para a posicao " << i << ": ";
			cin >> vet[i];
			if (vet[i] < 0){
				cout << "\033[31mNumeros negativos nao sao aceitos!\033[m" << endl;
			}
		}while(vet[i] < 0);
	}
}
void imprimeNum(int *vet, int tam){
	cout << "Vetor: ";
	for (int i = 0; i < tam-1; i++){
		cout << vet[i] << ", ";
	}
	cout << vet[tam-1] << "." << endl;
}
int contaNum(int *vet, int escolha){
	int qnt = 0;
	for (int i = 0; i < 20; i++){
		if (vet[i] == escolha){
			qnt++;
		}
	}
	return qnt;
}

void tiraNum(int *vet, int escolha){
	int tam;
	int qnt = contaNum(vet, escolha);
	tam = 20-qnt;
	int *nVet = new int[tam];
	int c =0;
	
	for (int i = 0; i < 20; i++){
		if (vet[i] != escolha){
			nVet[c] = vet[i];
			c++;
		}
	}
	imprimeNum(nVet, tam);
}



int main(){
	int *vet = new int[20];
	leNum(vet);
	
	int escolha =0;
	cout << "Informe o numero deseja retirar: ";
	cin >> escolha;
	tiraNum(vet, escolha);

	return 0;
}
