#include <iosteam>
using namespace std;

bool verificaIgual(int * vet, int ind, int num){
	bool igual = false;
	for (int i = 0; i < ind; i++){
		if (vet[i] == num){
			igual = true;
		}
	}
	return igual;
}

void preencheVetor(int * vet, int tam){
	bool igual = false;
	for (int i = 0; i < tam; i++){
		do{
			cout << "Informe o valor para a posicao " << i << ": ";
			cin >> vet[i];
			igual = verificaIgual(vet, i, vet[i]);
			if (vet[i]%2 == 0 or igual){
				cout << "Valor invalido!" << endl;
			}
		}while(vet[i]%2 == 0 or igual);
	}
	
}

// Nao foi pedido mas achei melhor fazer
void imprimeVetor(int *vet, int tam){
	cout << "Vetor = [";
	for (int i =0; i < tam-1; i++){
		cout << vet[i] << ", "; 
	}
	cout << vet[tam-1] << "]" << endl;
}

int main(){
	int *vet;
	int tam = 0;
	do{
		cout << "Informe o tamanho do vetor: ";
		cin >> tam;
		if (tam <= 0){
			cout << "Tamanho invalido!" << endl;
		}
	}while(tam <= 0);
	vet = new int[tam];
	preencheVetor(vet, tam);
	imprimeVetor(vet, tam);
	return 0;
}
