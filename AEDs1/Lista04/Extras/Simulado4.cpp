#include <iostream>
using namespace std;

void imprimeVet(int *vet, int tam){
	cout << "Vetor = [";
	for (int i = 0; i < tam-1; i++){
		cout << vet[i] << ", ";
	}
	cout << vet[tam-1] << "]" << endl;
}
int multiplicaNum(int a, int b){
	int multi = 1;
	if (b >= 9){
		return 0;
	}
	else {
		for (int i = 0; i < b; i++){
			multi *= a;
		}
	}
	return multi;
}

int main(){
	int *vet;
	int a =0, b =0, tam = 0;
	cout << "Informe quantas vezes deseja executar a funcao: ";
	cin >> tam;
	vet = new int[tam];
	for (int i = 0; i < tam; i++){
		cout << "Informe o valor de a" << i+1 << ": ";
		cin >> a;
		cout << "Informe o valor de b" << i+1 << ": ";
		cin >> b;
		
		vet[i] = multiplicaNum(a,b);
	}
	imprimeVet(vet, tam);
	return 0;	
}
