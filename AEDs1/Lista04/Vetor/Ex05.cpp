#include <iostream>
using namespace std;

void leNum(int *vet){
	for (int i = 0; i < 10; i++){
		cout << "Informe um numero para a posicao " << i << ": ";
		cin >> vet[i];
	}
}

void contaNum(int *vet, int escolha){
	int qnt = 0;
	for (int i = 0; i < 20; i++){
		if (vet[i] == escolha){
			qnt++;
		}
	}
	cout << "O numero " << escolha << " aparece " << qnt << " vezes no Vetor." << endl;
}

int main(){
	int *vet = new int[10];
	int escolha = 0, qnt =0;
	leNum(vet);
	cout << "Informe um numero para procurar no vetor: ";
	cin >> escolha;
	
	contaNum(vet, escolha);
	
	return 0;
}
