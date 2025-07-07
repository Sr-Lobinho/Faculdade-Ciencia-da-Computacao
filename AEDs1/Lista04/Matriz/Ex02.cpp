#include <iostream>
unsing namespace std;

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

void imprimeMaior(int *vet){
	int *indmaior;
	int maior = 0;
	int indiguais = 0;
	for (int i = 0; i < 20; i++){
		if (vet[i] >= maior){
			maior = vet[i];
		}
	}
	for (int i = 0; i <20; i++){
		if (vet[i] == maior){
			indiguais++;
		}
	}
	indmaior = new int[indiguais];
	indiguais = 0;
	for (int i = 0; i < 20; i++){
		if (vet[i] == maior){
			indmaior[indiguais] = i;
			indiguais++;
		}
	}
	
	cout << "Maior numero: " << maior << endl;
	cout << "Indices do maior numero: ";
	for (int i = 0; i < indiguais; i++){
		cout << indmaior[i] << " ";
	}
	
}

int main(){
	int * vet = new int[20];
	leNum(vet);
	imprimeMaior(vet);
	return 0;
}
