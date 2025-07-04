#include <iostream>
using namespace std;

void calculaMedia(string *nomes, float *precos, int *categs, int tam){
	float media = 0, media5 = 0;
	int cont5 = 0;
	for (int i = 0; i < tam; i++){
		media += precos[i];
		if (categs[i] == 5){
			media5 += precos[i];
			cont5++;
		}
	}
	media /= tam;
	media5 /= cont5;
	cout << "Produtos da categoria 5 que estao com o preco acima da media da categoria: ";
	for (int i = 0; i < tam; i++){
		if (categs[i] == 5 and precos[i] > media5){
			cout << nomes[i] << "  ";
		}
	}
	cout << endl << "Produtos que estao com o preco abaixo da media geral: ";
	for (int i = 0; i < tam; i ++){
		if(precos[i] < media){
			cout << nomes[i] << "  ";
		}
	}
	cout << endl;
}
void comparaPreco(float *precos, int tam, string *nomes){
	float caro = 0, barato = 0;
	
	for (int i = 0; i < tam; i ++){
		if (i == 0){
			caro = precos[i];
			barato = precos[i];
		}
		else if(precos[i] > caro){
			caro = precos[i];
		}
		else if(precos[i] < barato){
			barato = precos[i];
		}
	}
	cout << "Mais caros: "; 
	for (int i = 0; i < tam; i++){
		if (precos[i] == caro){
			cout << nomes[i] << "  ";
		}
		
	}
	cout << " preco: R$" << caro << endl;
	

	cout << "Mais baratos: ";
	for (int i = 0; i < tam; i++){
		if(precos[i] == barato){
			cout << nomes[i] << "  ";
		}
	}
	cout << " preco: R$" << barato << endl;
}
void preencheVet(string *nomes, float *precos, int *categs, int tam){
	for (int i = 0; i < tam; i++){
		cout << "Informe o nome do produto " << i+1 << ": ";
		cin >> nomes[i];
		cout << "Informe o preco do produto " << i+1 << ": R$";
		cin >> precos[i];
		do{
			cout << "Informe a categoria do produto " << i+1 << ": ";
			cin >> categs[i];
			if(categs[i] < 1 or categs[i] > 10){
				cout << "Categoria invalida! " << endl;
			}
		}while(categs[i] < 1 or categs[i] > 10);
	}
	
}
int main(){
	int tam = 50;
	string *nomes = new string[tam];
	float *precos = new float[tam];
	int *categs = new int[tam];
	preencheVet(nomes,precos,categs, tam);
	comparaPreco(precos,tam,nomes);
	calculaMedia(nomes,precos,categs,tam);
	
	
	return 0;
}
