#include <iostream>
#include <string>
using namespace std;

void leFicha(string *nomes, char *cods, float *alturas){
	for(int i = 0; i < 50; i++){
		cout << "Informe o nome do aluno " << i+1 <<": ";
		cin >> nomes[i];
		cout << "Informe a altura do aluno " << i+1 << ": ";
		cin >> alturas[i];
		cout << "Informe o sexo do aluno[F/M] " << i +1 << ": ";
		cin >> cods[i];
	}
}

float calculaMedia(float *alturas){
	float media = 0;
	for (int i = 0; i < 50; i++){
		media += alturas[i];
	}
	media /= 50;
	return media;
}
float calculaMediaF(float *alturas, char *cods){
	float mediaf = 0;
	int count = 0;
	for (int i = 0; i < 50; i++){
		if (cods[i] == 'F'){
			mediaf += alturas[i];
			count++;
		}
	}
	mediaf /= count;
	return mediaf;
}

void comparaAlturas(string *nomes, char * cods, float *alturas){
	float media = calculaMedia(alturas);
	float mediaf = calculaMediaF(alturas, cods);
	float maior =0, menor = 0;
	for(int i = 0; i < 50; i++){
		if(i == 0){
			maior = alturas[i];
			menor = alturas[i];
		}
		else if(alturas[i] > maior){
			maior = alturas[i];
		}
		else if (alturas[i] < menor){
			menor = alturas[i];
		}	
	}
	cout << "Maior altura: " << maior << endl << "Menor altura: " << menor << endl;
	cout << "Mulheres acima da media: ";
	for (int i = 0; i < 50; i++){
		if (cods[i] == 'F' and alturas[i] > mediaf){
			cout << nomes[i] << " ";
		}
	}
	cout << endl << "Pessoas abaixo da media: ";
	for (int i = 0; i < 50; i++){
		if(alturas[i] < media){
			cout << nomes[i] << " ";
		}
	}
	
}

int main(){
	string *nomes = new string[50];
	char *cods = new char [50];
	float *alturas = new float[50];
	leFicha(nomes, cods, alturas);
	comparaAlturas(nomes,cods,alturas);
	return 0;
}
