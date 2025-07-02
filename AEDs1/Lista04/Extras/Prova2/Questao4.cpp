#include <iostream>
using namespace std;

int fatorial(int num){
	int fat =1;
	if(!(num <= 0 or num > 11)){
		for (int i = 1; i <= num; i++){
			fat *= i;
		}
	}
	return fat;
}

void preencheVet(int *vet, int tam){
	for (int i = 0; i < tam; i ++){
		vet[i] = fatorial(i+1);
	}
}


int main(){
	int tam = 11;
	int * vet = new int[11];
	preencheVet(vet, tam);
	int n = 0;
	cout << "Informe um numero: ";
	cin >> n;
	if (n < 1 or n > 11){
		cout << "Valor invalido!" << endl;
	}
	else{
		cout << "Fatorial: " << vet[n-1];
	}
	
	return 0;
}
