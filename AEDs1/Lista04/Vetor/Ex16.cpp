#include <iostream>
using namespace std;

void zeraVetor(float *vet1, int *vet2){
	for (int i = 0; i < 5; i++){
		vet1[i] = 0;
		vet2[i] = 0;
	}
}

void calculaMedia(string *nomes, float *salarios, int *setores, int tam){
	float *mediaset = new float[5];
	int *contset = new int[5];
	float media = 0;
	
	zeraVetor(mediaset, contset);
	
	for (int i = 0; i < tam; i++){
		mediaset[setores[i] - 1] += salarios[i];
		contset[setores[i]-1] += 1;
		media += salarios[i];
	}
	for (int i = 0; i < 5; i++){
		mediaset[i] /= contset[i];
	}
	media /= 10;
	
	for (int i = 0; i < 5; i ++){
		cout << "Setor " << i+1 << " Media: R$" << mediaset[i] << endl;
	}
	
	cout << endl << "Funcionarios com salarios abaixo da media da empresa: ";
	for (int i = 0; i < tam; i ++){
		if(salarios[i] < media){
			cout << nomes[i] << "  ";
		}
	}
	
}

void comparaSal(float *salarios, int tam){
	int maior = 0, menor = 0;
	for (int i = 0; i < tam; i++){
		if (i == 0){
			maior = salarios[i];
			menor = salarios[i];
		}
		else if(salarios[i] > maior){
			maior = salarios[i];
		}
		else if (salarios [i] < menor){
			menor = salarios[i];
		}
	}
	cout << "Maior salario: R$" << maior << endl;
	cout << "Menor salario: R$" << menor << endl << endl;
}

void preencheFicha(string *nomes, float*salarios, int *setores, int tam){
	for (int i = 0; i < tam; i++){
		cout << "Informe o nome do funcionario "<< i+1 << ": ";
		cin >> nomes[i];
		cout << "Informe o salario: R$";
		cin >> salarios[i];
		do{
			cout << "Informe o setor: ";
			cin >> setores[i];
			if (setores[i] < 1 or setores[i] > 5){
				cout << "Setor nao existe!" << endl;
			}
		}while(setores[i] < 1 or setores[i] > 5);
	}
}


int main(){
	int tam = 10;
	float *salarios = new float[tam];
	int *setores = new int[tam];
	string *nomes = new string[tam];
	preencheFicha(nomes,salarios,setores, tam);
	comparaSal(salarios, tam);
	calculaMedia(nomes,salarios,setores, tam);
	
	
	
	return 0;
}
